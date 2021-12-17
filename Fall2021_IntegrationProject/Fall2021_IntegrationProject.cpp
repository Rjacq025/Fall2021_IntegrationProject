/** @file Fall2021_IntegrationProject.cpp

 *  @brief Driver class for the project

 *

 *  Longer description of file: This is the driver class that class that is just
 being used to run the program. the object class classes where we create objects

 *

 *  @author Richardson Jacques

 *  @bug 47 bugs.

 */

#include <math.h>

#include <fstream>
#include <iostream>
#include <string>

#include "ArraysofPointConv_5.h"
#include "BasicsReview_2.h"
#include "Continue.h"
#include "Date_8.h"
#include "Enums_14.h"
#include "FireFighter_10.h"
#include "GenericsTemplates_12.h"
#include "Inheritance_9.h"
#include "MailPerson_10.h"
#include "OOPModularity_7.h"
#include "OperatorOverload_13.h"
#include "Person_10.h"
#include "PointFunctMem_4.h"
#include "StringsAsObjNspcEx_6.h"

//////////////////////////////////// Week 1 ////////////////////////////////////

/** @brief This week doesn't start with coding

 *

 *  Longer description of function: During Week 1 of this class, not much
 attention was not based on coding itself but rather the IDE's and computer
 setups behind this.

 *

 *  @return void

 */
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

//////////////////////////////////// Week 2 ////////////////////////////////////

/** @brief This week covers the basics of c++ coding that the students covered
 in the previous semester

 *

 *  Longer description of function: During this week, we covered the basics of
 c++ coding that the students covered in the previous semester. This included
 topics like. In order toshow a prime example of these topics I have programmed
 a meal price calculator. Notes seen in code.

 *

 *  @return Void

 */

void demo_basicsReview() {
  std::cout << "2: Basics Review - Programming Concepts\n";
  // In situations where the function is created after the main function use a
  // 'prototype' before the main function. A function prototype is a forward
  // declaration. It consists of: return type header(parameter);
  // not needed when included in .h file

  // Meal Price Calculator

  std::cout << "Enter meal price: ";  // ask user for a number

  double meal_price{};  // define variable x to hold user input (and
                        // zero-initialize it)
  std::cin >>
      meal_price;  // get number from keyboard and store it in variable x

  const double total_price =
      calc_total_meal_price(meal_price);  // function call (argument)

  std::cout << "Total Price: " << total_price << "\n";
}

//////////////////////////////////// Week 3 ////////////////////////////////////

/** @brief During this week we covered flow control and data aggregates

 *

 *  Longer description of function: We learned how to control the flow of the
 program (finishing up this topic from last week), and mostly about the if, else
 and switch statements. These statements are used to control the conditions and
 path of the running program. We also looked into bitwise operators. The class
 also covered vectors. The coding example below for this week is a bitwise
 calculation program meant to gather possible comparison values from two
 integers inputted by the user. This uses the bitwise values of the numbers
 below these and compare them. This is referenced from my work on HackerRank.
 Again, the notes are in the code.

 *

 *  @return Void

 */
void demo_flowControl() {
  std::cout << "3: Flow control and data aggregates\n";

  std::cout << "\nPlease insert the highest number to consider: ";
  int max_of_set = 0;  // n
  std::cin >> max_of_set;

  std::cout
      << "Please insert a comparison value less than the highest number: ";
  int limit_of_result_max = 0;  // k
  std::cin >> limit_of_result_max;

  int and_result = 0;
  int or_result = 0;
  int xor_result = 0;
  int largest_and_result_less_than_max = 0;
  int largest_or_result_less_than_max = 0;
  int largest_xor_result_less_than_max = 0;

  // for loops are count controlled they are used when you want to specify how
  // many times a loop should repeat while loops are condition controlled thwy
  // are used when you don't know how long a loop would last
  for (int a = 1; a < max_of_set; a++) {
    for (int b = a + 1; b <= max_of_set;
         b++) {  // for(initialization; condition; incrememt)
      and_result = a & b;
      or_result = a | b;
      xor_result = a ^ b;

      if ((and_result > largest_and_result_less_than_max) &&
          (and_result < limit_of_result_max)) {
        largest_and_result_less_than_max = and_result;
        // std::cout << "new largest found " << endl;
      }

      if ((or_result > largest_or_result_less_than_max) &&
          (or_result < limit_of_result_max)) {
        largest_or_result_less_than_max = or_result;
      }

      if ((xor_result > largest_xor_result_less_than_max) &&
          (xor_result < limit_of_result_max)) {
        largest_xor_result_less_than_max = xor_result;
      }

      std::cout << "\nA = " << a << ", B = " << b << ", A & B = " << and_result
                << ", A or B = " << or_result << ", A xor B = " << xor_result
                << "\n";
    }
  }

  std::cout << "\nThe largest 'and' result is "
            << largest_and_result_less_than_max << "\n";
  std::cout << "The largest 'or' result is: " << largest_or_result_less_than_max
            << "\n";
  std::cout << "The largest 'xor' result is" << largest_xor_result_less_than_max
            << "\n";

  // StackOverflow: A C++ function can return only one value. However, you can
  // return multiiple values by wrapping them in a class or struct. Personal
  // Note: I'm not making this into a struct or a class so I'm not using a
  // header for this week.
}

//////////////////////////////////// Week 4 ////////////////////////////////////

/** @brief Pointers, functions, and memory - Parameter passing dereferencing

 *

 *  Longer description of function: During this week we covered passing
 parameters and other ways to influence values through the manipulation of
 headers and their parameters

 *

 *  @return Void

 */
void demo_pointer() {
  std::cout << "4: Pointers, functions, and memory - Parameter passing, "
               "dereferencing\n\n";

  ///////////// Parameter passing
  std::cout << "The first topic we will cover will be passing parameters. This "
               "can be done a couple of different ways\n";

  // Parameters: passing by value
  demonstrate_functions();

  std::cout << "Demonstrate default parameters, inline functions, and "
               "overloaded functions\n";

  demonstrate_more_function_stuff();

  // This part was not necessary for the project but I still wanted to include
  // it! struct Character
  // {
  //    int speed;
  //    int level;
  //    int health;
  // }
  //
  // int main()
  // {
  //    struct Character sonic;
  //    sonic.speed = 9999999;
  //    soinc.level = 40;
  //    soinic.health = 10;
  //    std::cout << "speed = " << sonic.speed << std::endl;
  //    std::cout << "level = " << sonic.level << std::endl;
  //    std::cout << "health = " << sonic.health << std::endl;
  // }
  //
  //
}

//////////////////////////////////// Week 5 ////////////////////////////////////

/** @brief An introduction to Data and its place in classes.

 *

 *  Longer description of function: This week we mainly started the use of
 objects, specifically focusing on fields, methods, and overall properties of
 classes. The example code is based off of an example from cplusplus.com and
 their tutorial on classes, with some adjustments to cover the topics in class.;

 *

 *  @return Void

 */
void demo_array() {
  std::cout << "5: Data - Arrays of pointers and Conversion - Strings intro\n";

  // A class is kind of like a blueprint or a cookie cutter (not exactly an
  // existing object). These are the instructions for creating an object with
  // the properties and behaviors created in the class. This would mimic data
  // types like how the int in 'int x' could compare to the Rectangle in
  // 'Rectangle rect;' both create a datatype with characteristics for
  // objects/variables to adopt whenever they are created.

  // An object as mentioned earlier is most easily described as the house
  // created from the blueprint or the cookie created from the cookie cutter. It
  // exists with a location in memory like a variable. The only difference is,
  // instead of being a representation of a preset data type, this object is an
  // instance of a class

  // classes example
  Rectangle rect{};
  rect.set_width(3);
  rect.set_height(4);
  std::cout << "width: " << rect.get_width() << "\n";
  std::cout << "height: " << rect.get_height() << "\n";
  std::cout << "area: " << rect.area() << "\n";
}

//////////////////////////////////// Week 6 ////////////////////////////////////

/** @brief Covers interacting with data not directly in the code of a program.

 *

 *  Longer description of function: This function show how to saves text to a
 computer file then reads that saved text from the file all while using code.

 *

 *  @return Void

 */
void demo_data() {
  std::cout << "6: Data - Strings as objects, namespaces, exceptions\n\n";
  // This week we covered

  // this is the code from cplusplus's tutorial on files we used them in class
  // in our IDE's
  demo_save_to_file();

  // The result from this is coming from a saved file
  demo_read_from_file();
}

//////////////////////////////////// Week 7 ////////////////////////////////////

/** @brief Shows Modularity (classes and packages)
 *

 *  Longer description of function: Shows Modularity (classes and packages)
 especially under different types of programming (procedural vs. Object Oriented
 Programming)

 *

 *  @return Void

 */
void demo_modularity() {
  std::cout
      << "7: The essentials of OOP - Modularity (classes and packages)\n\n";

  // This is an example from edube c++ tutorial
  std::cout
      << "This is an example of a stack using procedural programming.\n\n";
  procedural_stack_demo();

  std::cout << "\nThis is an example of a stack using object oriented based "
               "programming\n\n";
  object_oriented_stack();

  // LO4. Include a comment in which you compare and contrast the
  // procedural/functional approach and the object-oriented approach
  //
  // The procedural/functional programming is a programming model that is built
  // around the idea that programs are sequences of instructions to be executed.
  // This primarily focuses on splitting up programs into named sets of
  // instructions called procedures (funtions). A procedure can store local data
  // that is not available from outside the procedure's scope and can also
  // access and modify global data variables
  //
  // The Object-Oriented approach (OOP) is a programming model that is built on
  // the concept of objects that have properties/data (fields) and
  // behaviors/code to modify data (methods). OOP mimics a lot of the real-world
  // attributes of objects
  //
  // Procedural/Functional approach vs. the Object-Oriented approach
  //
  //  Procedural programming has a top down apprach whereas OOP has a bottom up
  //  approach
  //
  //  There is no access specifier (public, protected, private) in procedural
  //  programming whereas OOP does have these access specifiers.
  //
  //  In Procedural programming adding new data and functions are not easy
  //  whereas OOP makes adding new data and functions easy.
  //
  //  Procedural programming does not encapsulate (hide) its data so it is less
  //  secure, whereas OOP does involve encapsulation so data is more secure.
  //
  //  You cannot overload in Procedural programming whereas overloading is
  //  possible in OOP.
  //
  //  In Procedural programming, function is more important than data, whereas
  //  in OOP, data is more important than functions
  //
  //  Procedural programming is based on the unreal world, whereas OOP is based
  //  on the real world
}

//////////////////////////////////// Week 8 ////////////////////////////////////

/** @brief This week we covered encapsulation.

 *

 *  Longer description of function: We covered encapsulation with the use of
 access identifiers and how to work with hidden data.

 *

 *  @return Void

 */
void demo_encapsulation() {
  std::cout << "8: The essentials of OOP - Encapsulation\n\n";

  std::cout << " This program will post a predetermined date in the "
               "Year/Month/Day format:\n\n";

  // This example is from learncpp tutorial "Class code and header files"
  Date_8 my_date(2011, 10, 12);  // makes an object
  std::cout << my_date.getYear() << " / " << my_date.getMonth() << " / "
            << my_date.getDay() << std::endl;
}

//////////////////////////////////// Week 9 ////////////////////////////////////

/** @brief This week we covered inheritance (Class hierarchies).

 *

 *  Longer description of function: The class hierarchies in inheritance allow
 code in parent/super classes to be reused for distinct subclasses

 *

 *  @return Void

 */
void demo_inheritance() {
  std::cout << "9: Inheritance - Class hierarchies\n\n";

  Equilateral eqr;
  eqr.equilateral();
  eqr.isosceles();
  eqr.triangle();

  // LO2a. Include comments describing the visibility inheritance model
  //
  // Inheritance
  //
  // The visibility inheritance model refers to how different inheritance
  // types interact with access specifiers to allow or block class member
  // access.
  //
  // To be more specific, inheritance involves two types of classes, a
  // super/parent/base class and a sub/child/base class, when these two
  // classes are created the base class' members (fields & methods) have three
  // different "Visibility modes" (access levels) which determine which
  // classes can access it and which cannot. This is what makes a difference
  // between regular classes and inheritance classes (base/derived).
  //
  // 1) If a member in a base class is "public," it will be accessible
  // to any and all classes. Any class can use this.
  //
  // 2) If a member in a base class is "protected," it can only be accessed by
  // the derived class. Only derived/child/sub classes can use this.
  //
  // 3) If a member in a base class is "private," it cannot be accessed by any
  // other class. No classes, including derived classes, can access this.
  //
  //
  // However the rules are different when it comes to the class' accessibility
  // themselves (when it's not public of course)
  //
  // 1) Protected Visibility Mode: If the base class is "protected,"
  // then both the "public" and "protected" member of the base class will also
  // be protected in the derived class
  //
  // 2) Private Visibility Mode: If the base class is "private," then both the
  // "public" and "protected" member of the base class will also be private in
  // the derived class
  //
  //
  //
}

/////////////////////////////////// Week 10 ///////////////////////////////////

/** @brief In this week we covered polymorphism

 *

 *  Longer description of function: Polymorphism is used in this function to
 output different data ints and strings when different objects are used. The
 output for the objects are different due to the change in the Person parent
 class method drive() from the Firefighter and MailPerson child/sub class methos
 drive().

 *

 *  @return Void

 */
void demo_polymorphism() {
  std::cout << "10: Polymorphism - Virtual functions\n\n";

  // This program is based off of professor Vanselow's code from our class on
  // polymorphism

  Person_10 ryan;
  // std::cout << ryan << std::endl;
  std::cout << ryan.drive() << std::endl;
  MailPerson_10 aiden;
  std::cout << aiden.drive() << std::endl;
  FireFighter_10 jairo;
  std::cout << jairo.drive() << std::endl;

  Person_10* regularPerson = new Person_10;
  std::cout << regularPerson->drive() << std::endl;
  // -> is called the arrow operator.
  // To access members of a structure, use the dot operator. To access members
  // of a structure through a pointer, use the arrow operator.

  std::cout << regularPerson->get_older() << std::endl;

  // polymorphism
  Person_10* jobUnknown = nullptr;
  std::cout << "Enter the job. 1 for MailPerson, 2 for FireFighter"
            << std::endl;
  int job_code = 0;
  std::cin >> job_code;
  if (job_code == 1) {
    jobUnknown = new MailPerson_10;
  }
  if (job_code == 2) {
    jobUnknown = new FireFighter_10;
  }

  // std::cout << static_cast<MailPerson_10 *>(jobUnkown)->drive() << std::endl;
  // //the pointer points to a different class/data type here
  std::cout << jobUnknown->drive() << std::endl;
  std::cout << jobUnknown->get_older() << std::endl;
  // std::cout << jobUnknown << std::endl;

  // LO3. Correctly reason about control flow in a program using dynamic
  // dispatch. [Usage] Dynamic dispatch takes place here, this is the process of
  // selecting which implemenation of a polymorphic method (subclass method) to
  // call. Late binding is function call that is resolved during runtime. The
  // compiler creates the type of object during runtime and then binds the
  // funtion call to the object. without the use of "virtual" or a static cast
  // its impossible to known which code to go to whenever drive() is full.

  // LO5. Explain the relationship between object - oriented inheritance(code -
  // sharing and overriding) and subtyping(the idea of a subtype being usable in
  // a context that expects the supertype).[Familiarity] A function call on a
  // base class type can go to the derived implementation. in c++ that is
  // throught the key word "virtual"
}

/////////////////////////////////// Week 11 ///////////////////////////////////

/** @brief This function is based off of exceptions and error handling.

 *

 *  Longer description of function: In this function we cover exception handling
 and observe how this changes with polymorphism causing different types of
 exception being caught.

 *

 *  @return Void

 */
void demo_exception() {
  std::cout << "11: Exceptions - Error handling\n\n";

  // This is an example of an exception that professor Vanselow covered in class

  // c++ isn't very good at generating exceptions
  // compare it to baseball, if the pitching machine is not delivering any
  // baseballs then how else will the ball get to the batter the ball must be
  // thrown otherwise
  int num1 = 5;
  int num2 = 0;
  if (num2 == 0) {
    throw std::invalid_argument("");
    // throw is like a function call. after the if statement it will search for
    // the proper catch that fits it
  }
  // you can also place the function call in an exception in main
  try {
    // const int num1 = 1;

    std::cout << num1 / num2;
  } catch (const std::invalid_argument&
               ex) {  // more specific exceptions should be at the top
                      // generalized ones at the bottom
    std::cout << "Can't divide by 0" << std::endl;
  } catch (const std::exception& ex) {  // polymorphism
    std::cout << "Caught you" << std::endl;
  } catch (...) {
    std::cout << "Caught all you" << std::endl;
  }
  // std::cout << num1 << std::endl; // out of scope
}

/////////////////////////////////// Week 12 ///////////////////////////////////

/** @brief This week we covered templates.

 *

 *  Longer description of function: This week we covered templates and the use
 of auto in order to pass datatypes themselves to other functions. This is based
 off of code we completed in Professor Vanselows class Templates carry over data
 types contaainer stores multiple datatypes like vectors or arrays

 *

 *  @return Void

 */
void demo_generics() {
  std::cout << "12: Generics/Templates\n\n";
  demonstrate_template();

  // Working on templates/auto is essentially the easier version of this code:
  // add_nums for ints only
  // int add_nums (int num1, int int2) { return num1 + int2; }

  // add_nums for doubles only using overloading
  // double add_nums(double num1, double int2) { return num1 + int2; }
}

/////////////////////////////////// Week 13 ///////////////////////////////////

/** @brief This week primarily covers operator overloading

 *

 *  Longer description of function: This week primarily covers operator
 overloading. This example of operator overload is from a hackerRank that we
 worked on in class

 *

 *  @return Void

 */
void demo_operators() {
  std::cout << "13: Operators - Pointer Arithmetic\n";

  //
  // LO1c. Utilize an initialization list
  Complex x, y;
  std::string s1, s2;
  std::cout << "Please input an equation 'a+ib' where a and b are numbers and "
               "i is a constant (leave it as i):\n"
            << std::endl;
  std::cin >> s1;
  std::cout << "\nPlease input a second equation\n" << std::endl;
  std::cin >> s2;
  x.input(s1);
  y.input(s2);
  Complex z = x + y;
  std::cout << "Adding equations:\n" << z << std::endl;
}

/////////////////////////////////// Week 14 ///////////////////////////////////

/** @brief This function covers enums.

 *

 *  Longer description of function: this program is a quick and easy example we
 worked on HackerRank in class. Incrementing and decrementing an enumerator

 *

 *  @return Void

 */
void demo_enueratedTypes() {
  std::cout << "14: Enumerated Types\n";

  // There are two types of enums
  // enums don't have methods in c++
  // Don't use ALL_CAPS for enumerators

  // don't have an enum where the objects have the same values (the enumerations
  // become interchangeable), it might not be an error in c++ but it is poor
  // coding practice! This should be avoided.

  // Best practice: Don't assign specific values to your enumerators

  // Best practice: Don't assign the same value to two enumerators
  // in the same enumeration unless there's a very good reason.

  // Enums are like a class in which all of the objects are predefined
  // Enumerated types are incredibly useful for code documentation and
  // readability purposes when you need to represent a specific, predefined set
  // of states.

  int num = 0;
  std::cout << "\nPlease type a number: \n";
  std::cin >> num;
  e f = static_cast<e>(num);
  std::cout << "1. " << static_cast<int>(f) << std::endl;
  std::cout << "2. " << static_cast<int>(--f) << std::endl;
  std::cout << "3. " << static_cast<int>(f) << std::endl;
  std::cout << "4. " << static_cast<int>(f--) << std::endl;
  std::cout << "5. " << static_cast<int>(f) << std::endl;
}

/////////////////////////////////// Week 15 ///////////////////////////////////

/** @brief This isn't much of a function just wrap-up week

 *

 *  Longer description of function: Not much code here, this week we just
 focused on finishing up our projects.

 *

 *  @return Void

 */
void demo_wrapUp() {
  std::cout << "15: Wrap Up\n";

  std::cout << "Not much code here, this week we just focused on finishing up "
               "our projects"
            << std::endl;
}

///////////////////////////////////// Main /////////////////////////////////////

/** @brief Main function starts off the running program.

 *

 *  Longer description of function: This function takes the user's name and
 greets them. Then it shows the user a list of topics to choose from. This is
 kind of like a table of contents. Where numbers 1-16 shows you the code from
 the listed topics.

 *

 *  @return Should not return

 */
int main() {
  // Introduction for the user and gets their name
  std::cout << "Please enter your name: ";
  std::string userName;
  std::cin >> userName;

  std::cout
      << "\nWelcome " + userName +
             ", this is a program designed to cover most (if "
             "not, all) of the topics covered in COP 3003, otherwise known "
             "as Object Oriented Programming\n ";

  bool continue_program = true;

  while (continue_program) {
    std::cout << "\nPlease type in the number of the Week/Topic you would like "
                 "to observe in order to access it.\n "

                 "\n  1: Essentials to coding - Course Overview\n"
                 "\n  2: Basics Review - Programming Concepts\n"
                 "\n  3: Flow control and data aggregates\n"
                 "\n  4: Pointers, functions, and memory - Parameter passing, "
                 "dereferencing\n"
                 "\n  5: Data - Arrays of pointers and Conversion - Strings "
                 "intro\n"
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
                 "\n  15: Wrap Up\n \n  16: Quit\n\n";

    // Switch statement used sort of like a table of contents for the week
    // choices

    int topicChoice = 0;
    std::cin >> topicChoice;

    switch (topicChoice) {
      case 1:
        demo_essentials();
        continue_program_function();
        break;
      case 2:
        demo_basicsReview();
        continue_program_function();
        break;
      case 3:
        demo_flowControl();
        continue_program_function();
        break;
      case 4:
        demo_pointer();
        continue_program_function();
        break;
      case 5:
        demo_array();
        continue_program_function();
        break;
      case 6:
        demo_data();
        continue_program_function();
        break;
      case 7:
        demo_modularity();
        continue_program_function();
        break;
      case 8:
        demo_encapsulation();
        continue_program_function();
        break;
      case 9:
        demo_inheritance();
        continue_program_function();
        break;
      case 10:
        demo_polymorphism();
        continue_program_function();
        break;
      case 11:
        try {
          demo_exception();
        } catch (const std::exception& ex) {
          std::cout << "Caught in main. " << ex.what() << std::endl;
        }
        continue_program_function();
        break;
      case 12:
        demo_generics();
        continue_program_function();
        break;
      case 13:
        demo_operators();
        continue_program_function();
        break;
      case 14:
        demo_enueratedTypes();
        continue_program_function();
        break;
      case 15:
        demo_wrapUp();
        continue_program_function();
        break;
      case 16:
        continue_program = false;
        break;
      default:
        std::cout << "Try again. Please type in one of the numbers from the "
                     "selection.\n\n";
        break;
    }
  }

  // Thinking of having a navigation system between the pages
  // Thinking of including an exit option as well
  return 0;  // status code (tells the condition of the program)
}

// endl requires std::
/////////////////////////////// Useful link ///////////////////////////////
// https://www.learncpp.com/
// These are the requirments for this project
// https://sites.google.com/site/profvanselow/course/cop-3003/projects-3003
