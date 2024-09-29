#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(int argc, char *argv[]){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Example", SDL_WINDOWPOS_UNDEFINED, SDL_WIND  OWPOS_UNDEFINED, 800, 600, SDL_WINDOW_OPENGL);
    SDL_Delay(2000);
    SDL_DestroyWindow(window);
    SDL_Quit();
    //aaaaaaaaaaaaaaaa
    return 0;
}