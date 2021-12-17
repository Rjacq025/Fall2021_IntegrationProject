/** @file BasicsReview_2.h

 *  @brief Header that houses code for week 2 section

 *

 *  Longer description of file: This header file has code that is a meal price
 calculator. It takes a meal price adds a tax and tip to it and send back to
 total price

 *

 *  @author Richardson Jacques

 *  @bug 5 bugs.

 */

// Personal Note: headers are useful for storing functions that are to be called
// on later in the main cpp function

#include <iostream>


/** @brief This is the run-down of a function/method.

 *

 *  Longer description of function: For this function we will actively note down the structure of a
// function/method as well as how to call one. (This can be done in functions or
// in "main")

 *

 *  @param double meal_price: price the user inputs for the meal

 *  @return total_price: meal price with a tax and tip added to it.

 */
constexpr double calc_total_meal_price(
    double meal_price) noexcept {  // header(parameter), void is the return type
  // function body
  const double tax = meal_price * .06;
  const double tip = meal_price * .15;

  const double total_price = meal_price + tax + tip;

  return total_price;
}

// Personal Note: BE VERY CAREFUL!!!
// Having a header file that is included by two different .cpp files will cause
// the compiler to fail (making the header run more than once) #pragma once is a
// header guard that keeps this from happening