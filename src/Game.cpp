#include <iostream>
#include "headers/WindowBuilder.h"

using namespace std;

int main() {
    WindowBuilder window;
    
    window.SetWidth(1024)
          .SetHeight(768)
          .SetTitle("Space Invadors C++")
          .SetBackgroundColor(BLACK)
          .Build();

    while (!WindowShouldClose()) {
    
        BeginDrawing();
        EndDrawing();
    }

    window.Close();

    return 0;
}