#ifndef ABSTRACTLANDSCAPE_HPP
#define ABSTRACTLANDSCAPE_HPP
#include "global.hpp"
#include "AbstractBackgroundObject.hpp"
class AbstractLandscape;
class GmaeMaze;
typedef boost::function<AbstractLandscape *(GameMaze *)> LandscapeGenerator;
typedef boost::function<void (AbstractLandscape *)> LandscrapeDestructionHandler;
class AbstractLandscape: public AbstractBackgroundObject
{
    public:
        static AbstractLandscape* create(GameMaze *);
        LandscapeGenerator replacement() const;
        void setReplacement(const LandscapeGenerator& gen);
        void destructionSignal(const LandscrapeDestructionHandler &handler);
  };

#endif
