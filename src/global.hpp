#ifndef GLOBAL_HPP
#define GLOBAL_HPP

namespace global
{
enum class AbsoluteMovementDirection
{
North, South, West, East, Idle
};
enum  ObjectState
{
  Birth,
  Movement,
  Action,
  Slack,
  Death
};
};

#endif
