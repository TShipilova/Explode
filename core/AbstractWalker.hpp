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
#include "Typedefs.hpp"
#include "AbstractModel.hpp"

class AbstractWalker : public AbstractModel
{
public:
    AbstractWalker();
    const Position& position () const;
    void moveTo (int x, int y);
    void moveTo (const std::complex<int> &pos);
    unsigned int speed () const;
    int factorSpeed (double factor); //Allow factor, but not sum speed to solve some order problems.
    void applyAspect (AbstractTimedAspect *);
    void applyAspect (AbstractDistanceAspect *);
    void applyAspect(AbstractPermanentAspect *);
    int passAblility ()  const;
    void setPassAbility (int);
    bool bombPassAblility () const;
    void setBombPassability ();
   AbsoluteMovementDirection movementDirection () const;
    void setMovementDirection (AbsoluteMovementDirection direction);
    void collised(AbstractWalker *with);
    void setMovementBehavior(AbstractMovementBehavior *);
    void setCollisionBehavior(AbstractCollisionBehavior *);
    void passedSignal(const PassHandler &handler);
    void passabilityCheckerSignal(const PassabilityChecker &checker);
    virtual ~AbstractWalker();
private:
    bool checkMovePossibility(AbsoluteMovementDirection direction); //Double check, in fact.
};


#endif
