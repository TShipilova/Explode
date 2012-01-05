#ifndef ABSTRACTLANDSCAPE_HPP
#define ABSTRACTLANDSCAPE_HPP

class AbstractWalker;
class AbstractLandscapeAnimation;
enum LandscapeAnimationState
{
  Birth,
  Attention,
  Life,
  Death
};
class AbstractLandscape
{
public:
  AbstractLandscape(int x, int y);
  virtual int passAbilityRequirement () = 0 const;
  virtual bool blockExplosion () = 0 const;
  virtual void exploded () = 0;
  bool interruptAnimation () const;
  LandscapeAnimationState animationState () const;
  virtual void setAnimationState (LandscapeAnimationState newState);
  virtual void passed (AbstractWalker *) = 0;
  virtual std::string name () = 0;
  virtual std::string description () = 0;
};

#endif
