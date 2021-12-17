/** @file Inheritance_9.h

 *  @brief Header that houses code for week 9 section

 *

 *  Longer description of file: This header contains code that displays the use
 of inheritance. In this file there are three classes that all inherit from the
 file one step above the other. This program is an example of inheritance code
 that I worked on in HackerRank.

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

#pragma once
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

// LO2. Use subclassing to design simple class hierarchies that allow code to be
// reused for distinct subclasses. [Usage]

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