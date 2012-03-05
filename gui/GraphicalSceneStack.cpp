/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */
#include <algorithm>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include "Assert.hpp"
#include "GraphicalScene.hpp"
#include <boost/lambda/lambda.hpp>


GraphicalSceneStack::GraphicalSceneStack(sf::RenderWindow* window)
        : m_window(window)
{

}
GraphicalSceneStack::~GraphicalSceneStack()
{
    delete m_window;
}
sf::RenderWindow* GraphicalSceneStack::renderWindow() const
{
    return m_window;
}
void GraphicalSceneStack::pushScene(GraphicalScene *scene)
{
    m_scene_stack.push_back(scene);
}
void GraphicalSceneStack::popScene()
{
    assert(!m_scene_stack.empty());
    m_scene_stack.back()->free();
    m_scene_stack.pop_back();
}
void GraphicalSceneStack::popSceneTo(const GraphicalScene *scene)
{
    assert(scene);
    while (!m_scene_stack.empty())
        if (scene != m_scene_stack.back())
            popScene();
    assert(!m_scene_stack.empty());
}

void GraphicalSceneStack::processEvent(const sf::Event & event)
{
    //chainEvent();
    switch (event.Type)
    {
    case sf::Event::Closed:
        this->chainEvent(&GraphicalScene::closeEvent);
        break;
    case sf::Event::KeyPressed:
        this->chainEvent(&GraphicalScene::keyPressEvent, event.Key);
        break;
    case sf::Event::KeyReleased:
        this->chainEvent(&GraphicalScene::keyPressEvent, event.Key);
        break;
    default:
        break;
    }
}

//! Well, it is kind of tradeoff. Either I pull C++0x requirement(not so much deal, as development will take a while)
//! and eliminate code duplicate, but without using std::algorithm. Or I could split it for different count of args,
//!	use boost::lambda, get code duplicate and stay in C++03.
//!	Well, when C++0x lambdas will work with vardaic args, it will be even more elegant.
template <typename ...Args>
void  GraphicalSceneStack::chainEvent(bool (GraphicalScene::*method)(const Args &... ), const Args &...args)
{
    //It is really black magic. Fear the dark!
    auto scene_iterator = m_scene_stack.rbegin();
    while (scene_iterator != m_scene_stack.rend())
    {
        if ( ((*scene_iterator)->*method)(args ...))
            break;
        scene_iterator++;
    }
}

void GraphicalSceneStack::exec()
{
   
    while (m_window->isOpen())
    {
		 sf::Event event;
		while (window->PollEvent(event))
			this->processEvent(event);
    }
    m_window->Clear();
	updateFrame();
	m_window->Display();
}
