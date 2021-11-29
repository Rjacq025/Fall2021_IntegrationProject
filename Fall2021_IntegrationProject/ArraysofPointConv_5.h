#pragma once
#include <iostream>

// fields and methods of a class are also referred to as members

class Rectangle {

// These are field variables, they represent the properties/attributes/characteristics of said class or object
// These are the properties of a class and contain varialbes
// The field members are usually private (no other class can access them)
 private:
  int width, height;

 // These are the functions/methods they represent the behaviors/verbs of said object/class
 // These are the behaviors of a class/object and contain functions
 // The method/function members are usually public (other classes can access them)
 // Examples of different method/function types include gets and sets and constructor

 public:
  void set_width(int);
  void set_height(int);
  int get_width();
  int get_height();
  int area() { return width * height; }
};


// Sets are always going to accecpt the data type of the field, and pass that parameter variable into the fielding
void Rectangle::set_width(int x) { //accept the parameter
	width = x; // pass it to the field
}

void Rectangle::set_height(int y) { 
	height = y; 
}


// Gets are always going to have a return type of the field's data type, and don't need anything to do thier job like parameters.
int Rectangle::get_width() { 
	return width; 
}

int Rectangle::get_height() { 
	return height; 
}






