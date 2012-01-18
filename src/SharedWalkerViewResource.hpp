#ifndef SHAREDWALKERVIEWRESOURCE_HPP
#define SHAREDWALKERVIEWRESOURCE_HPP
#include <string>
#include <SDL/SDL.h>
class SharedWalkerViewResource
{
public:
  SharedWalkerViewResource(const std::string &);
  void renderAnimation(SDL_Surface *surface, int frame, int siz);
};

#endif
