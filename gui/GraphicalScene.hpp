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
namespace sf{
class Event;
class RenderWindow;
}
class GraphicalSceneStack;
class GraphicalScene
{
	public:
		GraphicalSceneStack *masterStack() const;
		sf::RenderWindow * renderWindow() const;
		virtual bool processEvent(const sf::Event &) =0;
		virtual bool updateFrame();
		virtual ~GraphicalScene();
};

#endif // GRAPHICALSCENE_H
