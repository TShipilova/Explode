#ifndef ABSTRACTWALKER_HPP
#define ABSTRACTWALKER_HPP

class Position;
class AbstractTimedAspect;
class AbstractDistanceAspect;
class AbstractWalker
{
public:
  AbstractWalker();
  const Position& position() const;
  void moveTo(int x, int y);

  unsigned int speed() const;
  void setSpeed(int newSpeed);
  int factorSpeed(double factor);

  virtual void applyAspect()

  virtual int passAblility()  const;
  virtual void setPassAbility(int);

  virtual bool bombPassAblility() const;
  virtual void setBombPassability();
  
  virtual int carryAbility() const;
  virtual void setCarryAbility(int) const;

  virtual int explodeRadius() const;
  virtual void setExplodeRadius(int);
  
  virtual int bombLimit() const;
  virtual void bombLimit(int);
  
  virtual bool putBomb() const;
  
  
};


#endif
