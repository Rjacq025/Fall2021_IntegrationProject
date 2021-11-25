//
//
//
//
// The procedural/functional programming is a programming model that is built
// around the idea that programs are sequences of instructions to be executed.
// This primarily focuses on splitting up programs into named sets of
// instructions called procedures (funtions). A procedure can store local data
// that is not available from outside the procedure's scope and can also access
// and modify global data variables
//
// The Object-Oriented approach (OOP) is a programming model that is built on
// the concept of objects that have properties/data (fields) and behaviors/code
// to modify data (methods). OOP mimics a lot of the real-world attributes of
// objects
//
// Procedural/Functional approach vs. the Object-Oriented approach
//
//  Procedural programming has a top down apprach whereas OOP has a bottom up
//  approach
//
//  There is no access specifier (public, protected, private) in procedural
//  programming whereas OOP does have these access specifiers.
//
//  In Procedural programming adding new data and functions are not easy whereas
//  OOP makes adding new data and functions easy.
//
//  Procedural programming does not encapsulate (hide) its data so it is less
//  secure, whereas OOP does involve encapsulation so data is more secure.
//
//  You cannot overload in Procedural programming whereas overloading is
//  possible in OOP.
//
//  In Procedural programming, function is more important than data, whereas in
//  OOP, data is more important than functions
//
//  Procedural programming is based on the unreal world, whereas OOP is based on
//  the real world
//

#include <iostream>

#include "ArraysofPointConv_5.h"
#include "BasicsReview_2.h"
#include "EssentialsToCoding_1.h"
#include "FlowControl_3.h"
#include "PointFunctMem_4.h"
/*
#include ""
*/

//////////////////////////////////////////////////////////////////////////// Week 1 /////////////////////////////////////////////////////////////////////////////
// This week doesn't start with coding
void demo_essentials() {  
  std::cout << "1: Essentials to coding - Course Overview\n";
  std::cout
      << "\nDuring Week 1 of this class, not much attention was not based on "
         "coding itself but rather the IDE's and computer setups behind this. "
         "According to Edube.org, an IDE (Integrated Development Environment) "
         "is a software application that usually consists of a code editor, a "
         "compiler, a debugger, and a graphical user interface (GUI) "
         "builder.\n";
}



//////////////////////////////////////////////////////////////////////////// Week 2 /////////////////////////////////////////////////////////////////////////////
// This week covers the basics of c++ coding that the students covered in the previous semester

 
// In situations where the function is created after the main function use a
// 'prototype' before the main function. A function prototype is a forward
// declaration. It consists of:      return type header(parameter);

//not needed when included in .h file


void demo_basicsReview() {
  std::cout << "2: Basics Review - Programming Concepts\n";
  std::cout
      << "\nDuring this week, we covered the basics of c++ coding that the "
         "students covered in the previous semester. This included topics like "
         "        . In order to show a prime example of these topics I have "
         "programmed a meal price calculator (notes seen in code):\n\n";

  // Meal Price Calculator

  std::cout << "Enter meal price: ";  // ask user for a number

  double meal_price{};  // define variable x to hold user input (and zero-initialize it)
  std::cin >> meal_price;  // get number from keyboard and store it in variable x

  double total_price = calc_total_meal_price(meal_price);  // function call (argument)

  std::cout << "Total Price: " << total_price << "\n";
}



///////////////////////////////////////////////////////////////////// Week 3 /////////////////////////////////////////////////////////////////////////

void demo_flowControl() {
  std::cout << "3: Flow control and data aggregates\n";
  std::cout << "During this week we covered flow control and data aggregates. We learned how to control the flow of the program (finishing up this topic from last week), and mostly about the if, else and switch statements. These statements are used to control the conditions and path of the running program. We also looked into bitwise operators . The class also covered vectors   .   The coding example below for this week is a bitwise calculation program meant to gather possible comparison values from two integers inputted by the user. This uses the bitwise values of the numbers below these and compare them. This is referenced from my work on HackerRank (Again, the notes are in the code):";

  std::cout << "\nPlease insert the highest number to consider: ";
  int max_of_set;  // n
  std::cin >> max_of_set;

  std::cout << "Please insert a comparison value less than the highest number: ";
  int limit_of_result_max;  // k
  std::cin >> limit_of_result_max;

  int and_result = 0;
  int or_result = 0;
  int xor_result = 0;
  int largest_and_result_less_than_max = 0;
  int largest_or_result_less_than_max = 0;
  int largest_xor_result_less_than_max = 0;

  // for loops are count controlled they are used when you want to specify how many times a loop should repeat
  // while loops are condition controlled thwy are used when you don't know how long a loop would last
  for (int a = 1; a < max_of_set; a++) {
    for (int b = a + 1; b <= max_of_set; b++) {  // for(initialization; condition; incrememt)
      and_result = a & b;
      or_result = a | b;
      xor_result = a ^ b;

      if ((and_result > largest_and_result_less_than_max) && (and_result < limit_of_result_max)) {
        largest_and_result_less_than_max = and_result;
        // std::cout << "new largest found " << endl;
      }

      if ((or_result > largest_or_result_less_than_max) && (or_result < limit_of_result_max)) {
        largest_or_result_less_than_max = or_result;
      }

      if ((xor_result > largest_xor_result_less_than_max) && (xor_result < limit_of_result_max)) {
        largest_xor_result_less_than_max = xor_result;
      }
      
      std::cout<< "\nA = " << a << ", B = " << b << ", A & B = " << and_result << ", A or B = " << or_result << ", A xor B = " << xor_result <<"\n";
    }
  }

  std::cout << "\nThe largest 'and' result is " << largest_and_result_less_than_max << "\n";
  std::cout << "The largest 'or' result is: " << largest_or_result_less_than_max << "\n";
  std::cout << "The largest 'xor' result is" << largest_xor_result_less_than_max << "\n";

  // StackOverflow: A C++ function can return only one value. However, you can return multiiple values by wrapping them in a class or struct.
  // Personal Note: I'm not making this into a struct or a class so I'm not using a header for this week.
}

//////////////////////////////////////////////////////////////////// Week 4 ////////////////////////////////////////////////////////////////////////////

void demo_pointer() {
  std::cout << "4: Pointers, functions, and memory - Parameter passing, "
               "dereferencing\n";
}

///////////////////////////////////////////////////////////////////// Week 5 ///////////////////////////////////////////////////////////////////////////

void demo_array() {
  std::cout << "5: Data - Arrays of pointers and Conversion - Strings intro\n";
}

///////////////////////////////////////////////////////////////////// Week 6 ////////////////////////////////////////////////////////////////////////////

void demo_data() {
  std::cout << "6: Data - Strings as objects, namespaces, exceptions\n";
}

// Week 7

void demo_modularity() {
  std::cout << "7: The essentials of OOP - Modularity (classes and packages)\n";
}

// Week 8

void demo_encapsulation() {
  std::cout << "8: The essentials of OOP - Encapsulation\n";
}

// Week 9

void demo_inheritance() { std::cout << "9: Inheritance - Class hierarchies\n"; }

// Week 10

void demo_polymorphism() {
  std::cout << "10: Polymorphism - Virtual functions\n";
}

// Week 11

void demo_exception() { std::cout << "11: Exceptions - Error handling\n"; }

// Week 12

void demo_generics() { std::cout << "12: Generics/Templates\n"; }

// Week 13

void demo_operators() { std::cout << "13: Operators - Pointer Arithmetic\n"; }

// Week 14

void demo_enueratedTypes() { std::cout << "14: Enumerated Types\n"; }

// Week 15

void demo_wrapUp() { std::cout << "15: Wrap Up\n"; }

int main() {
  // Introduction for the user and gets their name
  std::cout << "Please enter your name: ";
  std::string userName;
  std::cin >> userName;
  std::cout
      << "\nWelcome " + userName +
             ", this is a program designed to cover most (if "
             "not, all) of the topics covered in COP 3003, otherwise known "
             "as Object Oriented Programming\n \nPlease type in the number of "
             "the "
             "Week/Topic you would like to observe in order to access it.\n "

             "\n  1: Essentials to coding - Course Overview\n"
             "\n  2: Basics Review - Programming Concepts\n"
             "\n  3: Flow control and data aggregates\n"
             "\n  4: Pointers, functions, and memory - Parameter passing, "
             "dereferencing\n"
             "\n  5: Data - Arrays of pointers and Conversion - Strings intro\n"
             "\n  6: Data - Strings as objects, namespaces, exceptions\n"
             "\n  7: The essentials of OOP - Modularity (classes and "
             "packages)\n"
             "\n  8: The essentials of OOP - Encapsulation\n"
             "\n  9: Inheritance - Class hierarchies\n"
             "\n  10: Polymorphism - Virtual functions\n"
             "\n  11: Exceptions - Error handling\n"
             "\n  12: Generics/Templates\n"
             "\n  13: Operators - Pointer Arithmetic\n"
             "\n  14: Enumerated Types\n"
             "\n  15: Wrap Up\n\n";


 //Switch statement used sort of like a table of contents for the week choices

  int topicChoice;
  std::cin >> topicChoice;

  switch (topicChoice) {
    case 1:
      demo_essentials();
      break;
    case 2:
      demo_basicsReview();
      break;
    case 3:
      demo_flowControl();
      break;
    case 4:
      demo_pointer();
      break;
    case 5:
      demo_array();
      break;
    case 6:
      demo_data();
      break;
    case 7:
      demo_modularity();
      break;
    case 8:
      demo_encapsulation();
      break;
    case 9:
      demo_inheritance();
      break;
    case 10:
      demo_polymorphism();
      break;
    case 11:
      demo_exception();
      break;
    case 12:
      demo_generics();
      break;
    case 13:
      demo_operators();
      break;
    case 14:
      demo_enueratedTypes();
      break;
    case 15:
      demo_wrapUp();
      break;
  }

  // Thinking of having a navigation system between the pages
  // Thinking of including an exit option as well
  return 0; // status code (tells the condition of the program)
}
