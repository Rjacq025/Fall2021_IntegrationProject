/** @file filename.cpp

 *  @brief Brief description of file.

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug 3 bugs.

 */

#pragma once
#ifndef DATE_H
#define DATE_H

// For classes used in only one file that aren�t generally reusable, define them directly in the single .cpp file they�re used in. 
// Trivial member functions (trivial constructors or destructors, access functions, etc�) can be defined inside the class. 
// For classes used in multiple files, or intended for general reuse, define them in a .h file that has the same name as the class. 

// LO6. Use object-oriented encapsulation mechanisms such as interfaces and
// private members. [Usage]
// LO1a. At least one class in a header file with non-trivial methods implemented in a cpp file
class Date_8 {
 private:
  int m_year;
  int m_month;
  int m_day;

 public:
  Date_8(int year, int month, int day);

  void SetDate(int year, int month, int day);

  int const getYear() noexcept { return m_year; }
  int const getMonth() noexcept { return m_month; }
  int const getDay() noexcept { return m_day; }
};

#endif
