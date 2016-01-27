
#pragma once
#include <SDL2/SDL.h>

class Display {

public:
  Display();
  ~Display();
  void update();
  void clear();
  uint8_t blit(uint8_t* src, uint8_t size, uint8_t x, uint8_t y);

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
  //uint8_t memory[256];
  bool memory[2048];
};