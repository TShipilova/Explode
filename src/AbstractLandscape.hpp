#ifndef ABSTRACTLANDSCAPE_HPP
#define ABSTRACTLANDSCAPE_HPP
#include "global.hpp"
class AbstractWalker;
class AbstractLandscapeAnimation;
class AbstractLandscape
{
public:
  AbstractLandscape(int x, int y);
  virtual bool allowPass(AbstractWalker *) const;
  virtual bool blockExplosion () = 0 const;
  virtual void passEvent (AbstractWalker *) = 0;
  virtual void timeEvent() =0;
  virtual void explodeEvent () = 0;
  global::ObjectState animationState () const;
  virtual std::string name () = 0;
  virtual std::string description () = 0;
protected:
  void setAnimationState(LandscapeState);
};

#endif
