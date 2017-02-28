//
//  Screen.hpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <stdio.h>
#include <iostream>

class Screen {
private:
   int rows, cols;
   char ** canvas;
public:
   Screen(int rows, int cols);
   ~Screen();
   void drawPixel(int x, int y, char c);
   friend std::ostream& operator<<(std::ostream& os, const Screen& scr);
};


#endif /* Screen_hpp */
