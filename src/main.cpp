#include <imgui.h>
#include "interface.h"
#include "graphics.h"

int main()
{
    // Init Graphics
    Graphics::init();

    // Init ImGUI
    Interface::init();

    // Window loop
    while (!Graphics::shouldClose())
    {
        // Process Inputs
        Graphics::processInputs();

        // Draw content of the Interface
        Interface::draw();

        // Swap buffers and present content to the screen
        Graphics::presentScreen();
    }

    // Shutdown
    Interface::shutdown();
    Graphics::shutdown();

    // If all goes well, finish with success
    return EXIT_SUCCESS;
}
