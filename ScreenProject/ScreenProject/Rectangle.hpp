//
//  Rectangle.hpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Rectangle : private Shape {
   Rectangle();
   void draw(Screen & scr);
   void undraw(Screen & scr);
};

#endif /* Rectangle_hpp */
