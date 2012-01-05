#ifndef ABSTRACTDISTANCEASPECT_HPP
#define ABSTRACTDISTANCEASPECT_HPP

class AbstractWalker;
class AbstractDistanceAspect
{
  virtual void applyAspect (AbstractWalker*) = 0;
  virtual void recallAspect (AbstractWalket*, int distance) = 0;
};

#endif
