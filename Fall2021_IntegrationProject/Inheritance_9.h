/** @file filename.cpp

 *  @brief Brief description of file.

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

#pragma once
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



// LO2. Use subclassing to design simple class hierarchies that allow code to be
// reused for distinct subclasses. [Usage] This program is an example of
// inheritance code that I worked on in HackerRank.

class Triangle {
 public:
  void triangle() { std::cout << "I am a triangle\n"; }
};

class Isosceles : public Triangle {
 public:
  void isosceles() { std::cout << "I am an isosceles triangle\n"; }
};

// Write your code here.
class Equilateral : public Isosceles {
 public:
  void equilateral() { std::cout << "I am an equilateral triangle\n"; }
};