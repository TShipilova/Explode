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

#ifndef GRAPHICALSCENE_H
#define GRAPHICALSCENE_H
#include <vector>
namespace sf {
class RenderWindow;
class Event;
};
class GraphicalScene;
class GraphicalSceneStack
{
public:
    //! Takes ownership of window.
    GraphicalSceneStack(sf::RenderWindow *window);
    //! Take ownership of Scenes.
    void pushScene(GraphicalScene *);
    void popScene();
    void popSceneTo(GraphicalScene *);
	sf::RenderWindow *renderWindow() const;
	void processEvent(const sf::Event &);
    void exec();
private:
    std::vector<GraphicalScene*> m_scene_stack;
};

#endif // GRAPHICALSCENE_H
