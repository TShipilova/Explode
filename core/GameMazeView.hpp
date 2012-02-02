/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  ilusionoflife <illusion.of.life92@gmail.com>

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


#ifndef GAMEMAZEVIEW_HPP
#define GAMEMAZEVIEW_HPP
#include <SDL/SDL.h>
#include <vector>
#include <complex>
class GameMaze;
class GameMazeView
{
    public:
            GameMazeView(GameMaze *);
            const SDL_Surface* render() const;
            int fieldSize() const;
            void setFieldSize(int new_size);
            std::vector<std::complex<int> > observatonPoints() const;
};

#endif // GAMEMAZEVIEW_H
