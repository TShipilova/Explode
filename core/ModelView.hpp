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


#ifndef LANDSCAPEVIEW_HPP
#define LANDSCAPEVIEW_HPP
#include <boost/shared_ptr.hpp>
#include <complex>
#include <SDL/SDL.h>

class AbstractModel;
struct GraphicalUnit
{
  SDL_Surface *surface;
  std::complex<int> pos;
  int size;
};
class ModelView
{
private:
    int m_animation_index;
    AbstractModel *m_model;
public:
    static const int IMAGE_SIZE = 64;
    static const int IMAGE_FRAMES = 16;
    ModelView(AbstractModel *model);
    void timeEvent();
    void render(const GraphicalUnit &unit) const;
};

#endif
