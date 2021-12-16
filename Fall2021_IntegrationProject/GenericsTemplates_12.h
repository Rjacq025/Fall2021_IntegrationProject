/** @file GenericsTemplates_12.h

 *  @brief Header that houses code for week 12 section

 *

 *  Longer description of file: This header displays the use of a template, this
 is shown by the auto template taking in multiple data types from the
 demonsrate_template() function.

 *

 *  @author Richardson Jacques

 *  @bug 10 bugs.

 */

#include <iostream>

// Template Prototype (if you ever need it!)
// Template <typename T>
// T add_nums(T num1, T num2);

// in c++ 20 if you use "auto" the compiler figures out the datatype by itself
// abbreviated function template
const auto add_nums(auto num1, auto num2) noexcept { return num1 + num2; }

// You can even use classes(like datatypes) in templates
class Aiden {
 public:
  const Aiden() noexcept = default;
};

// Use a single capital letter(starting with T) to name your template types
// (e.g, T, U, V, etc...)
// T represents a blank spot for any type of data type(s)

template <typename T>
const T return_it(T thing) noexcept {
  return thing;
}

void demonstrate_template() {
  constexpr int int1 = 1;
  constexpr int int2 = 2;
  std::cout << add_nums(int1, int2) << std::endl;
  constexpr double dbl1 = 1;
  constexpr double dbl2 = 2;
  std::cout << add_nums(dbl1, dbl2) << std::endl;
  std::string str1 = "1";
  std::string str2 = "2";
  std::cout << add_nums(str1, str2) << std::endl;
  std::cout << add_nums(int1, dbl2)
            << std::endl;  // testing this with different datatypes
  Aiden myAiden;
  return_it(myAiden);
  // std::cout << add_nums(myAiden, myAiden) << std::endl;
}

// template <typename T>
// T add_nums(T num1, T num2) {
//  return num1 + num2;
//}

// What if you want the template to accept different datatypes (int, double) do
// this instead

// Our goal here is to reduce the duplications we don't want two
// functions doing the same thing we want one

// vectors are like a template/class

// Behind the scenes Templeate argument deduction: the compiler deduces
// the type that should be used from the argument types

// templates types are sometimes called generic types

// a good rule of thumb is to create normal functions at first, and then
// convert them into function templates if you find you need an overload
// for different parameter types

// auto keyword (C++ 20) When the auto keyword is used as a parameter type
// in a normal function, the compiler will auto matically convert the
// function into a function template with each auto parameter becoming an
// independent template type parameter. this method for creating a function
// is called an abbreviated function template

// Template classes are ideal for implementing container classes

// you should put all of your template class code in the header file or rename
// cpp inl
