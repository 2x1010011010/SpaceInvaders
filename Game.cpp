#include <iostream>
#include "WindowBuilder.h"

using namespace std;

int main() {
    WindowBuilder window;
    
    window.setWidth(1024)
          .setHeight(768)
          .setTitle("Space Invadors C++")
          .setBackgroundColor(BLACK)
          .build();

    window.run();
}