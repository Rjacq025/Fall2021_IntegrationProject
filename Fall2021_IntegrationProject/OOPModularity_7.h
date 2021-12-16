/** @file OOPModularity_7.h

 *  @brief Header that houses code for week 7 section

 *

 *  Longer description of file: the code for this week shows a little more
 behind the creation of a class as well as the difference between procedure
 based programming and object oriented programming.

 *

 *  @author Richardson Jacques

 *  @bug 12 bugs.

 */

#include <iostream>

// LO1. Design and implement a class. [Usage]
class Stack {
  // fields
 private:
  int stackstore[100];
  int stack_pointer{};

  // methods
 public:
  // This is a constructor.
  // It is a special method.
  // no return type
  // name has to be the same as the class
  // MUST be public
  // called automatically when object gets created.
  // if no constructor is written the compiler makes default
  // need one when we want code to happen when the object gets created
  //
  const Stack(void) noexcept { stack_pointer = 0; }
  // LO1b. Overload a constructor
  const Stack(int num) noexcept {  // overloaded constructor
    // stack_pointer = num; // wouldn't really want to do this
  }

  void const push(int value) noexcept;
  int const pop(void) noexcept { return stackstore[--stack_pointer]; }
};

void const Stack::push(int value) noexcept {
  stackstore[stack_pointer++] = value;
}

int stack[100];  // global variable, bad because harder to debug
int SP = 0;

void const push(int value) noexcept {
  stack[SP++] = value;  // increment operator in postfix
}

int const pop(void) noexcept {
  return stack[--SP];  // decrement operator in prefix
}

void procedural_stack_demo(void) {
  push(3);
  push(2);
  push(1);
  std::cout << pop() << std::endl;  // :: scope resolution operator
  // SP = -4; // being able to do something like this is dangerous and bad
  std::cout << pop() << std::endl;
  std::cout << pop() << std::endl;
}

// stacking can most easily be compared to trays stacked on one another. The can
// only be accessed one by one and in order respectively. this is shown in a
// browser's history. It keeps track of all of the pages you visit in order when
// you click the back button. compared to undo/redo in microsoft word
//
//

void object_oriented_stack() {
  Stack little_stack;   // creation of a Stack object
  Stack another_stack;  // call to the constructor
  Stack funny_stack;

  little_stack.push(1);
  another_stack.push(little_stack.pop() + 1);
  funny_stack.push(another_stack.pop() + 2);
  std::cout << funny_stack.pop() << std::endl;
}
