#ifndef TYPEDEFS_HPP
#define TYPEDEFS_HPP
//This class contains all typedefs and forward declarations.
//It allow me to use include only in case on inheritation.
#include <complex>
#include <boost/function.hpp>
class AbstractBackgroundObject;
class AbstractCollisionBehavior;
class AbstractDistanceAspect;
class AbstractFoe;
class AbstractLandscape;
class GameMaze;
class Position;

typedef boost::function<AbstractBackgroundObject *(GameMaze *)> BackgroundObjectGenerator;
typedef boost::function<AbstractFoe *(GameMaze *)> FoeGenerator;
typedef boost::function<AbstractLandscape *(GameMaze *)> LandscapeGenerator;
typedef boost::function<bool (const AbstractWalker *, const std::complex<int> &pos)> PassabilityChecker;
typedef boost::function<void (AbstractLandscape *)> LandscrapeDestructionHandler;
typedef boost::function<void (AbstractModel *)>   AbstractModelEventHandler;
typedef boost::function<void (AbstractWalker *)> PassHandler;
typedef boost::function<void (AbstractWalker *)> PassHandler;
typedef boost::function<void (const AbstractModel *)> ConstantAbstractEventHandler;
typedef boost::function<void (const Bomber *)> DistantExplodeRequestHandler;

enum AbsoluteMovementDirection{ North, South, West, East, NoMovement};


#endif
