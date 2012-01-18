#ifndef SHAREDLANDSCAPEVIEWRESOURCE_HPP
#define SHAREDLANDSCAPEVIEWRESOURCE_HPP

#include <string>
#include <complex>
#include <SDL/SDL.h>
#include "global.hpp"

class SharedViewResource
{
public:
  SharedLandscapeViewResource(const std::string &name);
  template <global::ObjectState>
  void renderAnimation(SDL_Surface *surface, const std::complex<int> &pos, int frame);
  void renderAnimation(SDL_Surface *surface, const std::complex<int> &pos, int frame, 
                       global::AbsoluteMovementDirection dir);
  };

#endif
