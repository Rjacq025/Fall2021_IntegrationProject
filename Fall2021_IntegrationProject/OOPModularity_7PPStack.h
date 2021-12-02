#pragma once







class Stack {
  // fields
 private:
  int stackstore[100];
  int stack_pointer;

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
  Stack(void) { 
	  stack_pointer = 0; 
  }
  // LO1b. Overload a constructor 
  Stack(int num) {  // overloaded constructor
	 // stack_pointer = num; // wouldn't really want to do this
  }

  void push(int value);
  int pop(void) { 
	  return stackstore[--stack_pointer]; 
  }
};

void Stack::push(int value) { 
	stackstore[stack_pointer++] = value; }






int stack[100]; // global variable, bad because harder to debug
int SP = 0;

void push(int value) { 
	stack[SP++] = value; // increment operator in postfix 
}

int pop(void) { 
	return stack[--SP]; // decrement operator in prefix
}

void procedural_stack_demo(void) {
  push(3);
  push(2);
  push(1);
  std::cout << pop() << std::endl; // :: scope resolution operator
 //SP = -4; // being able to do something like this is dangerous and bad
  std::cout << pop() << std::endl;
  std::cout << pop() << std::endl;
}

// stacking can most easily be compared to trays stacked on one another. The can only be accessed one by one and in order respectively.
// this is shown in a browser's history. It keeps track of all of the pages you visit in order when you click the back button.
// compared to undo/redo in microsoft word
//
//





void object_oriented_stack() {
  Stack little_stack; // creation of a Stack object
  Stack another_stack; // call to the constructor
  Stack funny_stack;
  
  little_stack.push(1);
  another_stack.push(little_stack.pop() + 1);
  funny_stack.push(another_stack.pop() + 2);
  std::cout << funny_stack.pop() << std::endl;
}



