#ifndef LANDSCAPEVIEW_HPP
#define LANDSCAPEVIEW_HPP
class AbstractLandscape;
class LandscapeView
{
public:
  LandscapeView(AbstractLandscape *model);
  void timeEvent();
  template <typename ...Args>
  void render(Args ...args);
};

#endif
