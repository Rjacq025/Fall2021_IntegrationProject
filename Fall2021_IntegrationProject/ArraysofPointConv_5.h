/** @file ArraysofPointConv_5.h

 *  @brief Header that houses code for week 5 section

 *

 *  This is a header file that contains the main code and descripion of the
 Rectangle class as well as the functionality of getter and setter methods

 *

 *  @author Richardson Jacques

 *  @bug 5 bugs.

 */

#include <iostream>

// fields and methods of a class are also referred to as members

class Rectangle {
  // These are field variables, they represent the
  // properties/attributes/characteristics of said class or object These are the
  // properties of a class and contain varialbes The field members are usually
  // private (no other class can access them)
 private:
  int width, height;

  // These are the functions/methods they represent the behaviors/verbs of said
  // object/class These are the behaviors of a class/object and contain
  // functions The method/function members are usually public (other classes can
  // access them) Examples of different method/function types include gets and
  // sets and constructor

 public:
  void const set_width(int x) noexcept;
  void const set_height(int y) noexcept;
  const int get_width() noexcept;
  const int get_height() noexcept;
  const int area() noexcept { return width * height; }
};

// Sets are always going to accecpt the data type of the field, and pass that
// parameter variable into the fielding
const void Rectangle::set_width(int x) noexcept {  // accept the parameter
  width = x;                        // pass it to the field
}

const void Rectangle::set_height(int y) noexcept { 
	height = y; 
}

// Gets are always going to have a return type of the field's data type, and
// don't need anything to do thier job like parameters.
const int Rectangle::get_width() noexcept { return width; }

const int Rectangle::get_height() noexcept { 
	return height; 
}

//Personal note: noexcept is used for fucntions that 

// this one's for myself