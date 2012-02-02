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


#ifndef CONFIG_HPP
#define CONFIG_HPP
#include <complex>
namespace constconf
{
std::string datadir ();
};
class Config
{
public:
  static std::complex<int> currentResolution ();
  static bool setCurrentResolution (const std::complex<int> &);
  static int fieldSize ();
  static int progressFactor ();
  static void setProgressFactor (float frameDuration);
  static void setProgressFactor (int rawFactor);
};

#endif
