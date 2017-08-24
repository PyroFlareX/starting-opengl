#include <iostream>
#include "display.h"
#include <GL/glew.h>

int main()
{
    std::cout << "Hello Idiots!" << std::endl;
    Display display(800, 600, "Hello World!");
    while(!display.IsClosed())
    {
        glClearColor(0.0f, 0.15f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        display.Update();
    }
    return 0;
}
