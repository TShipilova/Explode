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


#ifndef ABSTRACTWALKER_HPP
#define ABSTRACTWALKER_HPP
#include "global.hpp"
#include "AbstractModel.hpp"
class Position;
class AbstractBehavior;
class AbstractTimedAspect;
class AbstractDistanceAspect;
class AbstractMovementBehavior;
class AbstractCollisionBehavior;

class AbstractWalker : public AbstractModel
{
public:
    AbstractWalker();
    const Position& position () const;
    void moveTo (int x, int y);
    unsigned int speed () const;
    int factorSpeed (double factor); //Allow factor, but not sum speed to solve some order problems.
    void applyAspect (AbstractTimedAspect *);
    void applyAspect (AbstractDistanceAspect *);
    int passAblility ()  const;
    void setPassAbility (int);
    bool bombPassAblility () const;
    void setBombPassability ();
    global::AbsoluteMovementDirection movementDirection () const;
    void setMovementDirection (global::AbsoluteMovementDirection direction);
    void collised(AbstractWalker *with);
    void setMovementBehavior(AbstractMovementBehavior *);
    void setCollisionBehavior(AbstractCollisionBehavior *);
    virtual ~AbstractWalker();
private:
    bool checkMovePossibility(global::AbsoluteMovementDirection direction); //Double check, in fact.
};


#endif
