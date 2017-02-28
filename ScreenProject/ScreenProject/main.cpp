//
//  main.cpp
//  ScreenProject
//
//  Created by Rix Lai on 2/28/17.
//  Copyright © 2017 None. All rights reserved.
//

#include <iostream>
#include "Screen.hpp"
#include "Shape.hpp"
#include "Line.hpp"
using namespace std;

int main() {
   Screen scr(10, 10);
   Line ln(0, 0, 5, 5);
   ln.draw(scr);
   cout << scr;
   return 0;
}
