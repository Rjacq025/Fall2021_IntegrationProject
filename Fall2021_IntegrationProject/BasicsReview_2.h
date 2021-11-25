// Personal Note: headers are useful for storing functions that are to be called
// on later in the main cpp function

#pragma once
#include <iostream>

// for this function we will actively note down the structure of a
// function/method as well as how to call one. (This can be done in functions or
// in "main")

double calc_total_meal_price(double meal_price) {  // header(parameter), void is the return type
  // function body
  double tax = meal_price * .06;
  double tip = meal_price * .15;

  double total_price = meal_price + tax + tip;

  return total_price;

}

//Personal Note: BE VERY CAREFUL!!! 
// Having a header file that is included by two different .cpp files will cause the compiler to fail (making the header run more than once)
// #pragma once is a header guard that keeps this from happening