#pragma once
#include<iostream>
#include<string>


class Person_10 {
 private:
  int age = 0;
  std::string name;
  std::string dob;

 public:
  virtual std::string drive() { return "normal"; } 
  // the keyword virtual is used when a function is intended to be overriden
  // It will go down to the 
  // "Final" prevents derived/sub classes from changing the behavior of base/super classes. This goes: datatype header() final {}

  virtual int get_older() { return ++age; } 

};
