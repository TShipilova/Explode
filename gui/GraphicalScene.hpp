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
#ifndef GRAPHICALSCENE_HPP
#define GRAPHICALSCENE_HPP
#include <SFML/Graphics.hpp>
class GraphicalSceneStack;
class GraphicalWidget;
class GraphicalScene
{
public:
  GraphicalSceneStack *masterStack() const;
  sf::RenderWindow * renderWindow() const;
  virtual bool keyPressEvent(const sf::Event::KeyEvent & );
  virtual bool keyReleaseEvent(const sf::Event::KeyEvent &);
  virtual bool mouseMoveEvent(const sf::Event::MouseMoveEvent &);
  virtual bool mouseEnterEvent(const sf::Event::MouseMoveEvent &);
  virtual bool mouseLeaveEvent(const sf::Event::MouseMoveEvent &);
  virtual bool mousePressEvent(const sf::Event::MouseButtonEvent &);
  virtual bool mouseReleaseEvent(const sf::Event::MouseButtonEvent &);
  virtual bool mouseWheelEvent(const sf::Event::MouseWheelEvent &);
  virtual bool resizeEvent(const sf::Event::SizeEvent &);
  virtual bool focusLoseEvent();
  virtual bool focusGainEvent();
  virtual bool closeEvent();
  virtual bool updateFrame();
  virtual void free();
  virtual ~GraphicalScene();
};

#endif // GRAPHICALSCENE_H
