#ifndef GAMEMAZE_HPP
#define GAMEMAZE_HPP
#include <vector>
#include "GameEvent.hpp"

class AbstractLandscape;
class AbstractWalker;
class GameMaze
{
public:
  static void reinitializeMaze(...);
  static GameMaze *instance();
  AbstractLandscape* landscapeAt(int x, int y);
  void timeEvent();
  static void timeEvent(const std::vector<GameEvent> &);
  
};

#endif
