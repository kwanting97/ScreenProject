//
//  Line.hpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>

#include "Shape.hpp"

class Line : private Shape {
private:
   int x1, y1, x2, y2;
   double getSlope();
   static const int VERTICAL_SLOPE = -1;
public:
   Line(int theX1, int theY1, int theX2, int theY2) : x1(theX1),
                        y1(theY1), x2(theX2), y2(theY2) {}
   void draw(Screen & scr);
   void undraw(Screen & scr);
};


#endif /* Line_hpp */
