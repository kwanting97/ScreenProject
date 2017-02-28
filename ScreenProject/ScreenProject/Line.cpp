//
//  Line.cpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#include "Line.hpp"

double Line::getSlope() {
   if(x2 - x1 == 0)
      return VERTICAL_SLOPE;
   return ((double)y2 - y1 ) / ((double)x2 - x1);
}

void Line::draw(Screen & scr) {
   double slope = getSlope();
   if(x1 < x2) {
      for(int i = x1; i < x2; i++) {
         int y = slope * i + y1;
         scr.drawPixel(i, y, '*');
      }
   } else if (x2 < x1) {
      for(int i = x2; i < x1; i++) {
         int y = slope * i + y2;
         scr.drawPixel(i, y, '*');
      }
   } else {
      int minY = (y1 < y2 ? y1 : y2);
      int maxY = (y1 < y2 ? y2 : y1);
      for(int i = minY; i < maxY; i++) {
         scr.drawPixel(x1, i, '*');
      }
   }
}

void Line::undraw(Screen & scr) {

}

