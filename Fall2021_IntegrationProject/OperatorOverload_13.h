/** @file OperatorOverload_13.h

 *  @brief Header that houses code for week 13 section

 *

 *  Longer description of file: This header file has code that describes how
 Operator overloaders work.

 *

 *  @author Your Name

 *  @bug 8 bugs.

 */

#include <iostream>

/** @brief Complex class

 *

 *  this is the user made datatype meant to get separate parts of the equation and properly add them together (a+ib) + (a+ib) = (a+a) + (ib+ib)

 *

 *  @return no return

 */
class Complex {
 public:
  int a, b;
  void const input(std::string s) noexcept {
    int v1 = 0;
    int i = 0;
    while (s[i] != '+') {
      v1 = v1 * 10 + s[i] - '0';
      i++;
    }
    while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
      i++;
    }
    int v2 = 0;
    while (unsigned(i) < s.length()) {
      v2 = v2 * 10 + s[i] - '0';
      i++;
    }
    a = v1;
    b = v2;
  }
};

// more often than not the datatype of the operatior has to be the class that
// you're going to be working with


/** @brief Overload operator + for the class Complex

 *

 *  Longer description of function: + should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)

 *

 *  @param const Complex& c1
 *  @param const Complex& c2

 *  @return new_c

 */
const Complex operator+(const Complex& c1, const Complex& c2) noexcept {
  Complex new_c;
  new_c.a = c1.a + c2.a;
  new_c.b = c1.b + c2.b;
  return new_c;
}

// 

/** @brief Overload operators << for the class complex

 *

 *  Longer description of function: << should print a complex number in the format "a+ib"
 the ostream operator is pretty much always used for 'operator<<' this pretty much allows us to have the print statement be the total a+ib. overload thhe output of the stream operator

 *

 *  @param std::ostream& os
 *  @param const Complex& c1

 *  @return os

 */
std::ostream& operator<<(std::ostream& os, const Complex& c1) {
  os << c1.a << "+i" << c1.b << std::endl;
  return os;
}
