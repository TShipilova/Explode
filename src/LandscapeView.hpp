#ifndef LANDSCAPEVIEW_HPP
#define LANDSCAPEVIEW_HPP
#include <config.h>
#include <boost/shared_ptr.hpp>
#include <complex>
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
  void render(SDL_Surface *surface, const std::complex<int> &pos, int size) const;
};

#endif
