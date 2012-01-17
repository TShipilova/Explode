#ifndef LANDSCAPEVIEW_HPP
#define LANDSCAPEVIEW_HPP
#include <config.h>
#include <boost/shared_ptr.hpp>
#include <SDL.h>

class AbstractLandscape;
class LandscapeView
{
private:
  static int IMAGE_SIZE = 128;
  static int IMAGE_FRAMES = 16;
  int m_animation_index;
  boost::shared_ptr<AbstractLandscape> model;
public:
  LandscapeView(AbstractLandscape *model);
  void timeEvent();
  void render(SDL_Surface *surface, int x, int y, int size) const;
};

#endif
