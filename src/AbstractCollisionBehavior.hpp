#ifndef ABSTRACTCOLLISIONBEHAVIOR_HPP
#define ABSTRACTCOLLISIONBEHAVIOR_HPP

class AbstractWalker;
class AbstractCollisionBehavior
{
public:
  virtual void collisionEvent(AbstractWalker *who, AbstractWalker *with);
};

template <typename Functional>
class AnonymusCollisionBehavior : public AbstractCollisionBehavior
{
private:
  Functional m_func;
public:
  virtual void collisionEvent(AbstractWalker *who, AbstractWalker *with)
  {
    m_func(who, with);
  }
};

#endif
