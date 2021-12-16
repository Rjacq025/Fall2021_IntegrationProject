/** @file BasicsReview_2.h

 *  @brief Header that houses code for week 2 section

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug 5 bugs.

 */

// Personal Note: headers are useful for storing functions that are to be called
// on later in the main cpp function


#include <iostream>

// for this function we will actively note down the structure of a
// function/method as well as how to call one. (This can be done in functions or
// in "main")

constexpr double calc_total_meal_price(double meal_price) noexcept {  // header(parameter), void is the return type
  // function body
  const double tax = meal_price * .06;
  const double tip = meal_price * .15;

  const double total_price = meal_price + tax + tip;

  return total_price;

}

//Personal Note: BE VERY CAREFUL!!! 
// Having a header file that is included by two different .cpp files will cause the compiler to fail (making the header run more than once)
// #pragma once is a header guard that keeps this from happening