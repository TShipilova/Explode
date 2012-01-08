#ifndef ABSTRACTWALKER_HPP
#define ABSTRACTWALKER_HPP

class Position;
class AbstractBehavior;
class AbstractTimedAspect;
class AbstractDistanceAspect;
class AbstractWalker;
enum  WalkerState
  {
    Birth,
    Movement,
    Action,
    Idle,
    Death
  };

class AbstractWalker
{
public:
  AbstractWalker();
  
  const Position& position () const;
  void moveTo (int x, int y);
  
  unsigned int speed () const;
  void setSpeed (int newSpeed);
  int factorSpeed (double factor);
  
  virtual void applyAspect (AbstractTimedAspect *);
  virtual void applyAspect (AbstractDistanceAspect *);
  
  virtual int passAblility ()  const;
  virtual void setPassAbility (int);
  
  virtual bool bombPassAblility () const;
  virtual void setBombPassability ();

  virtual int carryAbility () const;
  virtual void setCarryAbility (int);
  
  virtual int explodeRadius () const;
  virtual void setExplodeRadius (int);
  
  virtual int bombLimit () const;
  virtual void setBombLimit (int);
  
  virtual int bombTimeout ();
  virtual void setBombTimeout (int);

  virtual bool putBomb () const;
  virtual AbsoluteMovementDirection movementDirection () =0;
  void setMovementDirection (AbsoluteMovementDirection direction);
  virtual int birthTime()=0;
  virtual void timeEvent();
  
  void moveByDecision();
  void moveByOrder (AbsoluteMovementDirection direction);
  
  void collised(AbstractWalker *with);
  void setMovementBehavior(AbstractMovementBehavior *);
  void setCollisionBehavior(AbstractCollisionBehavior *);
  virtual ~AbstractWalker();

private:
  bool checkMovePossibility(AbsoluteMovementDirection direction); //Double check, in fact.
};


#endif
