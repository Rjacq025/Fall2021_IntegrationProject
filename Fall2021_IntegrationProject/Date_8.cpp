/** @file Date_8.cpp

 *  @brief This is contains methods for the Date class

 *

 *  Longer description of file: This kind of functions like a header file but is
 solely used for classes. This is used to house non-trivial (very important)
 methods specifically for said class.

 *

 *  @author Richardson Jacques

 *  @bug 2 bugs.

 */

#include "Date_8.h"

// Non-trivial member functions should be defined in a .cpp file that has the
// same name as the class.

// Date constructor
Date_8::Date_8(int year, int month, int day) { SetDate(year, month, day); }

// Date member function
void Date_8::SetDate(int year, int month, int day) {
  m_month = month;
  m_day = day;
  m_year = year;
}
