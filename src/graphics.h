//
// Created by Diego Santos Seabra on 05/04/21.
//

#ifndef OPEN_MONEY_GRAPHICS_H
#define OPEN_MONEY_GRAPHICS_H

#include <SDL.h>
#include <iostream>
#include <SDL_opengl.h>

namespace Graphics
{
    void init();
    bool shouldClose();
    void processInputs();
    void presentScreen();
    void closeWindow();
    void shutdown();

    SDL_Window *getWindow();
    SDL_GLContext getGLContext();

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
};


#endif //OPEN_MONEY_GRAPHICS_H
