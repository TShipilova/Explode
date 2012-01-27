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


#ifndef ABSTRACTMODEL_HPP
#define ABSTRACTMODEL_HPP
#include <string>
#include <boost/function.hpp>
class AbstractModel;
class GameMaze;
typedef boost::function<void (AbstractModel *)>   AbstractModelEventHandler;
enum  ModelState
{
  Birth,
  Movement,
  Action,
  Slack,
  Death
};
enum ModelType
{
  Landscape,
  BackgroundObject,
  Bomber,
  Foe,
  Unknown
};
class AbstractModel
{
public:
  virtual ModelType type () const = 0;
  virtual std::string name () const = 0;
  virtual std::string description () const = 0;
  virtual void timeEvent () const = 0;
  ModelState state () const;
  void setState (ModelState st);
  void destructionSignal (const AbstractModelEventHandler &handler) const;
  virtual int birthTime () const = 0;
  virtual int destructionTime () const = 0;
  void destroy ();
  GameMaze *maze () const;
  void setParentMaze(const GameMaze *);
};

#endif
