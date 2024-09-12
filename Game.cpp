#include <iostream>
#include "WindowBuilder.h"

using namespace std;

int main() {
    WindowBuilder window;
    
    window.SetWidth(1024);
    window.SetHeight(768);
    window.SetTitle("Space Invadors C++");
    window.SetBackgroundColor(BLACK);
    window.Build();
    window.Run();
}