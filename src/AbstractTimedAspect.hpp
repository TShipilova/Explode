#ifndef ABSTRACTTIMEDASPECT_HPP
#define ABSTRACTTIMEDASPECT_HPP

class AbstractWalket;
class AbstractTimedAspect
{
  virtual void applyAspect(AbstractWalker *)=0;
  virtual bool recallAspect(AbstractWalker *)=0; // return true on and only on last call.
}

#endif
