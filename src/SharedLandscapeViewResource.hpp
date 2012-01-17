#ifndef SHAREDLANDSCAPEVIEWRESOURCE_HPP
#define SHAREDLANDSCAPEVIEWRESOURCE_HPP

#include <string.h>
#include <SDL/SDL.h>
#include "global.hpp"

class SharedLandscapeViewResource
{
public:
  SharedLandscapeViewResource(const std::string &name);
  template <global::ObjectState>
  void renderAnimation(SDL_Surface *surface, const std::complex<int> &pos, int frame);
  template<global::Movement>
  void renderAnimation(SDL_Surface *surface, const std::complex<int> &pos, int frame, 
                       global::AbsoluteMovementDirection dir);
  
};

#endif
