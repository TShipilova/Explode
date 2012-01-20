#include <SDL/SDL.h>
#include "AbstractCollisionBehavior.hpp"
#include "AbstractDistanceAspect.hpp"
#include "AbstractLandscape.hpp"
#include "AbstractModel.hpp"
#include "AbstractMovementBehavior.hpp"
#include "AbstractTimedAspect.hpp"
#include "AbstractWalker.hpp"
#include "config.hpp"
#include "DefaultBehavior.hpp"
#include "GameEvent.hpp"
#include "GameMaze.hpp"
#include "global.hpp"
#include "LandscapeView.hpp"
#include "Position.hpp"
#include "ResourceManager.hpp"
#include "SharedViewResource.hpp"
#include "SharedWalkerViewResource.hpp"
int main ( int argc, char **argv )
{
    SDL_Init ( SDL_INIT_EVERYTHING );
    SDL_Quit();
    return 0;
}
