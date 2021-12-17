/** @file PointFunctMem_4.h

 *  @brief Header that houses code for week 4 section

 *

 *  Longer description of file: This header file has code that displays how to
 pass parameters by value, reference, and address.

 *

 *  @author Richardson Jacques

 *  @bug 4 bugs.

 */

#include <iostream>

// prototypes
// used for functions after the main/running function
void demonstrate_pass_by_value(int,
                               int);  // prototype has to match the parameters
void demonstrate_pass_by_ref(
    int&, int&);  // prototype MUST match the parameters/header
void demonstrate_pass_by_address(int*, int*);
void demonstrate_more_function_stuff();
void demonstrate_default_parameters();
void default_parameters(std::string greet, int repeats = 1);
inline int constexpr min(int, int) noexcept;
void demoOverload();
void demoOverload(int num1);

/** @brief Houses the parameter passing function calls

 *
 *  @return void

 */

void demonstrate_functions() {
  int num1 = 4;
  int num2 = 5;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;

  demonstrate_pass_by_value(num1, num2);  // calling a method
  std::cout << "back in calling function " << std::endl;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;

  demonstrate_pass_by_ref(num1, num2);  // calling a method
  std::cout << "back in calling function " << std::endl;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;

  demonstrate_pass_by_address(
      &num1, &num2);  // calling a method/function   "&" in front of data type
                      // sends address not value
  std::cout << "back in calling function " << std::endl;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;
}

/////////////////////////////////////// Parameters: passing by values
/** @brief Parameters: passing by values

 *

 *   This is passing by value what happens here is a new memory location gets
 created by the parameters, that is a variable declaration, when these values
 get passed in parenthesis, copies of these values go into the new memory
 location

   So in demonstrate_pass_by_value, when you reassign num1 and num2, you change
 the value of the new (copied) variables

   Personal Note: think of a diagram with two function boxes each with the same
 num1 and num2 values

 *

 *  @param int num1
 *  @param int num2

 *  @return void

 */
void demonstrate_pass_by_value(int num1, int num2) {  // heading
  std::cout << "In demonstrate_pass_by_value " << std::endl;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;
  num1 = 6;  // Reassigning the variables
  num2 = 7;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;
}

////////////////////////////////////// Parameters: passing by reference

// the best place to put an ampersand "&" is right after the data type in the
// header and since the ampersand is in the header it also has to be in the
// prototype. You don't have to do it in the call though...

/** @brief Parameters: passing by reference

 *

 * Instead of passing a copy of the values (pass by value), whe we do pass by
 ref we can think of it as a new location in memory is holding a reference to
 the original num1 and num2 the num1 and num2 of demonstrate_pass_by_ref is
 pointing back to the original demonstrate_functions() num1 and num2
 respectively. There isn't an actual value in demonstrate_pass_by_ref num1 and
 num2 just a reference.

   Whatever word you use for the parameter in demonstrate_pass_by_ref is whats
 being used to reference the other location in memory (variable) you don't
 actually need the same name, just the correct data types

 *

 *  @param int& num1
 *  @param int& num2

 *  @return void

 */
void demonstrate_pass_by_ref(int& num1, int& num2) {  // heading
  std::cout << "In demonstrate_pass_by_ref " << std::endl;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;
  num1 = 6;
  num2 = 7;
  std::cout << "num1 is " << num1 << std::endl;
  std::cout << "num2 is " << num2 << std::endl;

  //
}

/////////////////////////////////////// Parameters: passing by address
/** @brief Parameters: passing by address

 *

 *  num1 and num2 in demonstrate_pass_by_address are not values but are
 addresses so we need to use the dereferencer to access the actual num1 and num2
 values from demonstrate_functions "*num1" and "*num2" this applies to all uses
 of said variable in a function being used for pointers including cout.

   The three pointer rules
   1) Pointer and pointee are separate - don't forget to set up the pointee
   2) Dereference a pointer to access its pointee. (this only works if there is
 a pointee!) 3) Assignment (=) between pointers makes them point to the same
 pointee.

   locations in memory (variable) have an actual address, kind of like a post
 office and you want to reserve a post office box that box is going to have a
 number this is how you know which box you are using among all the other boxes
 (look at the address number). hexidecimal code is commonly used for addresses
 like 0xF23D

   When we pass by address, what happens is that we're sending the address and
 that is what's being stored in the parameter. In order to identify that we want
 to pass an address instead of a value we use an ampersand "&" You will have to
 use this in the header of the method call parameters of this function. We're
 sending an address, we're recieving something that can point back to that
 address. but in order to access the actual value from the address you need use
 the dereferencer "*"

   the benefit of passing by address is to change the actual value of the
 calling function itself save memory space (esspecially if you are passing
 something that takes up a lot of space like an object, array, or struct) This
 also allows you to return multiple values from a function when you pass by
 reference or address.

 *

 *  @param int* num1
 *  @param int* num2

 *  @return void

 */
void demonstrate_pass_by_address(int* num1, int* num2) {  // heading
  std::cout << "In demonstrate_pass_by_address " << std::endl;
  std::cout << "the address of num1 is " << num1 << std::endl;
  std::cout << "the address of num2 is " << num2 << std::endl;
  std::cout << "the value of num1 is " << *num1 << std::endl;
  std::cout << "the value of num2 is " << *num2 << std::endl;
  *num1 = 8;
  *num2 = 9;
  std::cout << "the address of num1 is " << num1 << std::endl;
  std::cout << "the address of num2 is " << num2 << std::endl;
  std::cout << "the value of num1 is " << *num1 << std::endl;
  std::cout << "the value of num2 is " << *num2 << std::endl;
}

///////////////// Default parameters, inline functions, and overloaded functions
/** @brief Houses and runs the other three functions

 *  @return void

 */
void demonstrate_more_function_stuff() {
  // default parameters
  demonstrate_default_parameters();

  // inline functions
  std::cout << min(5, 6) << '\n';
  // compiler would make something like
  // std::cout << 5 < 6 ? 5 : 6;  << '\n';
  std::cout << min(3, 2) << '\n';

  // overloaded functions
  demoOverload();
  demoOverload(2);
};

// Overload is demonstrated by having the same function name but different
// signatures (parameters)

/** @brief Shows how to overload methods without parameters.

 *  @return void

 */
void demoOverload() {
  std::cout << "in demoOverload with no parameters" << std::endl;
}

/** @brief Shows how to overload methods with parameters

 *

 *  @param int num1

 *  @return void

 */
void demoOverload(int num1) {
  std::cout << "in demoOverload with one parameters" << std::endl;
}

// you don't have to actually type inline in the header
/** @brief inline function in action

 *

 *   short hand version of an if-else statement: 
   if x is greater than y return y else return x

 *

 *  @param int x
 *  @param int y

 *  @return x < y ? x : y;

 */
inline int constexpr min(int x, int y) noexcept  // example of inline function
{  
  return x < y ? x : y;
}

/** @brief dedault parameters in action

 *

 *  default parameters is a way to have a varied number of arguments

 *

 *  @return void

 */
void demonstrate_default_parameters() {
  
  default_parameters("Hello", 2);
  default_parameters("Good morning");
  default_parameters("Hi", 1);
}

/** @brief Short description of function.

 *

 *  @param std::string greet
 *  @param int repeats

 *  @return void

 */
void default_parameters(std::string greet,
                        int repeats) {  // this header has a default
  // if you do use a parameter you are going to put the default value in the
  // parameter/prototype section
  for (int i = 0; i < repeats; i++) {
    std::cout << greet << std::endl;
  }
}
