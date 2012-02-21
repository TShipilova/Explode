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


#ifndef ABSTRACTBEHAVIOR_HPP
#define ABSTRACTBEHAVIOR_HPP
#include "Position.hpp"

class AbstractWalker;
class AbstractMovementBehavior
{
public:
virtual AbsoluteMovementDirection makeDecision (AbstractWalker *);
};

template <typename Functional>
class AnonymusMovementBehavior: public AbstractMovementBehavior
{
private:
Functional m_func;
public:
 AnonymusMovementBehavior<Functional>  (Functional func)
  : m_func(func)
{
}
virtual AbsoluteMovementDirection makeDecision(AbstractWalker *walker)
{
  return m_func(walker);
}
};

#endif
