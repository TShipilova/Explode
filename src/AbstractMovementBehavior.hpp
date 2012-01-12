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
 AnonymusBehavior(Functional func)
  : m_func(func)
{
}
virtual AbsoluteMovementDirection makeDecision(AbstractWalker *walker)
{
  return m_func(walker);
}
};

#endif
