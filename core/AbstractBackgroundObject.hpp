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


#ifndef ABSTRACTBACKGROUNDOBJECT_H
#define ABSTRACTBACKGROUNDOBJECT_H
#include <boost/function.hpp>
#include "AbstractModel.hpp"
class GameMaze;
class AbstractWalker;
class AbstractBackgroundObject 
  : public AbstractModel
{
public:
	typedef boost::function<AbstractBackgroundObject *(GameMaze *)> Generator;
    virtual bool allowPass ( AbstractWalker * ) const;
    virtual bool blockExplosion () const =0;
    virtual void passEvent ( AbstractWalker * ) = 0;
    virtual void explodeEvent () = 0;
    static AbstractBackgroundObject *create(GameMaze *);
};

#endif // ABSTRACTBACKGROUNDOBJECT_H
