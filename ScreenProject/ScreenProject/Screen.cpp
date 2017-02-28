//
//  Screen.cpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#include "Screen.hpp"

Screen::Screen(int rows, int cols) {
   this->rows = rows;
   this->cols = cols;

   canvas = new char*[rows];
   for(int i = 0; i < rows; i++) {
      canvas[i] = new char[cols];
      for(int j = 0; j < cols; j++) {
         canvas[i][j] = ' ';
      }
   }
}

Screen::~Screen() {
   for(int i = 0; i < rows; i++) {
      delete[] canvas[i];
   }

   delete[] canvas;
   canvas = NULL;
}

void Screen::drawPixel(int x, int y, char c) {
   canvas[y][x] = c;
}

std::ostream& operator<<(std::ostream& os, const Screen& scr) {
   for(int i = 0; i < scr.rows; i++) {
      for(int j = 0; j < scr.cols; j++) {
         os << scr.canvas[i][j];
      }
      os << std::endl;
   }

   return os;
}
