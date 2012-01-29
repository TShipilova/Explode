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


#ifndef GAMEMAZE_HPP
#define GAMEMAZE_HPP
#include <vector>
#include "GameEvent.hpp"
#include <boost/function.hpp>
#include <boost/signal.hpp>
#include "Typedefs.hpp"
class Bomber;
class GameMaze
{
public:
  GameMaze(...);
  //! Is really needed? */
  AbstractLandscape* landscapeAt(int x, int y);
  void timeEvent();
  void timeEvent(const std::vector<GameEvent> &);
  void modelCreatedSignal(const ConstantAbstractEventHandler &);
  void modelDestroySignal(const ConstantAbstractEventHandler &);
  void backgroundObjectCreationRequest(const BackgroundObjectGenerator &gen, const std::complex<int> &pos);
  void foeCreationRequest(const FoeGenerator &gen, const std::complex<int> &pos);
  void putBomber(Bomber *unit, const std::complex<int> &pos);
  void distantBombExplodeRequest(Bomber *);
};

#endif
