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

/** @brief Date constructor

 *

 *  Longer description of function: This send the year, month, and day to the
 SetDate() function once its created

 *

 *  @param int year: The year part of the date (YYYY/MM/DD)
 *  @param int month: The month part of the date (YYYY/MM/DD)
 *  @param int day: The day part of the date (YYYY/MM/DD)

 *  @return Date

 */
Date_8::Date_8(int year, int month, int day) { SetDate(year, month, day); }

/** @brief Date member function

 *

 *  Longer description of function: This takes the year, month, and day
 parameters and sets them to actual values

 *

 *  @param int year: The year part of the date (YYYY/MM/DD)
 *  @param int month: The month part of the date (YYYY/MM/DD)
 *  @param int day: The day part of the date (YYYY/MM/DD)

 *  @return void

 */
void Date_8::SetDate(int year, int month, int day) {
  m_month = month;
  m_day = day;
  m_year = year;
}
