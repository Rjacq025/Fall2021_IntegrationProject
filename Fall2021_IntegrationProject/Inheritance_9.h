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

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

// LO2. Use subclassing to design simple class hierarchies that allow code to be
// reused for distinct subclasses. [Usage]

/** @brief triangle super/parent/base class

 *

 *  Parent class of the isoceles and equilateral classes

 *

 *  @return no return

 */
class Triangle {
 public:
  void triangle() { std::cout << "I am a triangle\n"; }
};

/** @brief Isoceles sub/child/derived class

 *

 *  @return no return

 */
class Isosceles : public Triangle {
 public:
  void isosceles() { std::cout << "I am an isosceles triangle\n"; }
};

/** @brief Equilateral sub/child/derived class

 *  @return no return

 */
class Equilateral : public Isosceles {
 public:
  void equilateral() { std::cout << "I am an equilateral triangle\n"; }
};