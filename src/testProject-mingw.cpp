//============================================================================
// Name        : testProject-mingw.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "!!!Hello World SDL!!!" << endl; // prints !!!Hello World!!!

	const int screenWidth = 640;
	const int screenHeight = 480;

	SDL_Window* window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
	SDL_Surface* image = SDL_LoadBMP("C:/Users/Adrian/eclipse-workspace/testProject-mingw/tree.bmp");
	SDL_Renderer* render = SDL_CreateRenderer(window, -1, 0);
	SDL_Texture* texture1 = SDL_CreateTextureFromSurface(render, image);

	SDL_RenderCopy(render, texture1, NULL, NULL);
	SDL_RenderPresent(render);

	SDL_UpdateWindowSurface(window);

	SDL_Delay(5000);

	SDL_DestroyTexture(texture1);
	SDL_DestroyRenderer(render);
	SDL_FreeSurface(image);
	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}
