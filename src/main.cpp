#include <SDL/SDL.h>
#include <thread>
#include <unordered_map>
int main(int argc, char **argv)
{
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Quit();
  std::unordered_map<int, double> map;
  map[1]=2.2;
  return [](int value){return value;}(1);
}
