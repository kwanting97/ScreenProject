//
//  Shape.hpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include "Screen.hpp"

class Shape {
public:
   virtual void draw(Screen& scr) = 0;
   virtual void undraw(Screen& scr) = 0;
};

#endif /* Shape_hpp */
