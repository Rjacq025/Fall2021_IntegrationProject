/** @file filename.cpp

 *  @brief Brief description of file.

 *

 *  Longer description of file.

 *

 *  @author Your Name

 *  @bug 2 bugs.

 */

#include "Date_8.h"

// Non-trivial member functions should be defined in a .cpp file that has the same name as the class.

// Date constructor
Date_8::Date_8(int year, int month, int day) { 
	SetDate(year, month, day); 
}

// Date member function
void Date_8::SetDate(int year, int month, int day) {
  m_month = month;
  m_day = day;
  m_year = year;
}


