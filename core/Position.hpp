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


#ifndef POSITION_HPP
#define POSITION_HPP
#include <complex>
class Position
{
public:
  static const int SEGMENTS_BY_UNIT=1<<16;
  Position();
  Position(int x, int y);
  Position(const std::complex<int> &pos);
  Position(const Position &);
  bool isEven () const;
  int x () const;
  int y () const;
  operator std::complex<int> ();
  void setX (int x);
  void setY (int y);
  void moveX(int segments);
  void moveY(int segments);
};


#endif
