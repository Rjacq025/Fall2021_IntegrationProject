/** @file Person_10.h

 *  @brief Header that houses code for week 10, the person section

 *

 *  Longer description of file: This header file is part of week 10's
 polymorphism. It houses the Person class that is the parent of the Mailperson
 and FireFighter classes via inheritance.

 *

 *  @author Your Name

 *  @bug 2 bugs.

 */

#pragma once
#include <iostream>
#include <string>

/** @brief Person parent/super/base class

 *

 *  Longer description of function: This person class has the base output for
 the functions that it passes onto it's child classes unless they override this
 methods for themselves.

 *

 *  @return No return

 */
class Person_10 {
 private:
  int age = 0;
  std::string name;
  std::string dob;

 public:
  /** @brief Base drive() method for the class hierarchy system

  *

  *  Longer description of function:
  the keyword virtual is used when a function is intended to be overriden. It
  will go down to the "Final" prevents derived/sub classes from changing the
  behavior of  base/super classes. This goes: datatype header() final {}

  *

  *  @return "normal"

  */
  virtual std::string drive() { return "normal"; }

  /** @brief Base get_older() method for the class hierarchy system

  *

  *  Longer description of function: This function is kind of like the drive()
  function. We don't really use this method though

  *

  *  @return ++age

  */
  virtual int const get_older() noexcept { return ++age; }
};
