

// Procedural/Functional approach vs. the Object-Oriented approach
//
//

#include <iostream>
#include"EssentialsToCoding_1.h"
#include"BasicsReview_2.h"
#include"FlowControl_3.h"
#include"PointFunctMem_4.h"
#include"ArraysofPointConv_5.h"



















int main() {

  // Introduction for the user and gets their name
  std::cout << "Please enter your name: ";
  std::string userName;
  std::cin >> userName;
  std::cout
      << "\nkWelcome " + userName +
             ", this is a program designed to cover most (if "
             "not, all) of the topics covered in COP 3003, otherwise known "
             "as Programming II\n \nPlease type in the number of the "
             "Week/Topic you would like to observe in order to access it.\n "

             "\n  1: Essentials to coding - Course Overview\n"
             "\n  2: Basics Review - Programming Concepts\n"
             "\n  3: Flow control and data aggregates\n"
             "\n  4: Pointers, functions, and memory - Parameter passing, dereferencing\n"
             "\n  5: Data - Arrays of pointers and Conversion - Strings intro\n"
             "\n  6: Data - Strings as objects, namespaces, exceptions\n"
             "\n  7: The essentials of OOP - Modularity (classes and packages)\n"
             "\n  8: The essentials of OOP - Encapsulation\n"
             "\n  9: Inheritance - Class hierarchies\n"
             "\n  10: Polymorphism - Virtual functions\n"
             "\n  11: Exceptions - Error handling\n"
             "\n  12: Generics/Templates\n"
             "\n  13: Operators - Pointer Arithmetic\n"
             "\n  14: Enumerated Types\n"
             "\n  15: Wrap Up\n\n";

  int topicChoice;
  std::cin >> topicChoice;
  
  switch (topicChoice) { 
    case 1:
      std::cout << "1: Essentials to coding - Course Overview\n";
      break;
    case 2:
      std::cout << "2: Basics Review - Programming Concepts\n";
      break;
    case 3:
      std::cout << "3: Flow control and data aggregates\n";
      break;
    case 4:
      std::cout << "4: Pointers, functions, and memory - Parameter passing, dereferencing\n";
      break;
    case 5:
      std::cout << "5: Data - Arrays of pointers and Conversion - Strings intro\n";
      break;
    case 6:
      std::cout << "6: Data - Strings as objects, namespaces, exceptions\n";
      break;
    case 7:
      std::cout << "7: The essentials of OOP - Modularity (classes and packages)\n";
      break;
    case 8:
      std::cout << "8: The essentials of OOP - Encapsulation\n";
      break;
    case 9:
      std::cout << "9: Inheritance - Class hierarchies\n";
      break;
    case 10:
      std::cout << "10: Polymorphism - Virtual functions\n";
      break;
    case 11:
      std::cout << "11: Exceptions - Error handling\n";
      break;
    case 12:
      std::cout << "12: Generics/Templates\n";
      break;
    case 13:
      std::cout << "13: Operators - Pointer Arithmetic\n";
      break;
    case 14:
      std::cout << "14: Enumerated Types\n";
      break;
    case 15:
      std::cout << "15: Wrap Up\n";
      break;
  }

  //Thinking of having a navigation system between the pages
  //Thinking of including an exit option as well
}
