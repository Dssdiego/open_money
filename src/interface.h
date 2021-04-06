//
// Created by Diego Santos Seabra on 05/04/21.
//

#ifndef OPEN_MONEY_INTERFACE_H
#define OPEN_MONEY_INTERFACE_H

// NOTE: ImGUI Styles
//  https://github.com/ocornut/imgui/issues/707#issuecomment-670976818
//  https://github.com/ocornut/imgui/issues/707#issuecomment-760219522
//  https://github.com/ocornut/imgui/issues/707#issuecomment-678611331 (actual)

namespace Interface
{
    void init();
    void draw();
    void beginFrame();
    void endFrame();
    void shutdown();
    // Bind with SDL2 and OpenGL 3+
    void makeBindings();
    // Set colors and component styles
    void setStyle();
};

#endif //OPEN_MONEY_INTERFACE_H
