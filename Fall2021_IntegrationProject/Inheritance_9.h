// LO2a. Include comments describing the visibility inheritance model
// 
// Inheritance
//
// The visibility inheritance model refers to how different inheritance types
// interact with access specifiers to allow or block class member access.
//
// To be more specific, inheritance involves two types of classes, a
// super/parent/base class and a sub/child/base class, when these two classes
// are created the base class' members (fields & methods) have three different
// "Visibility modes" (access levels) which determine which classes can access
// it and which cannot. This is what makes a difference between regular classes
// and inheritance classes (base/derived).
//
// 1) If a member in a base class is "public," it will be accessible
// to any and all classes. Any class can use this.
//
// 2) If a member in a base class is "protected," it can only be accessed by the
// derived class. Only derived/child/sub classes can use this.
//
// 3) If a member in a base class is "private," it cannot be accessed by any
// other class. No classes, including derived classes, can access this.
//
//
// However the rules are different when it comes to the class' accessibility
// themselves (when it's not public of course)
//
// 1) Protected Visibility Mode: If the base class is "protected,"
// then both the "public" and "protected" member of the base class will also be
// protected in the derived class
//
// 2) Private Visibility Mode: If the base class is "private," then both the
// "public" and "protected" member of the base class will also be private in the
// derived class
//
//
//

#pragma once
class Inheritance_9 {};
