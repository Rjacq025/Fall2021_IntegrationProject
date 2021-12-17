/** @file Enums_14.h

 *  @brief Header that houses code for week 14 section

 *

 *  Longer description of file: This header is meant to contain code that covers
 enums. This specifically houses operator overloads that changes the value
 inputed by the user

 *

 *  @author Richardson Jacques

 *  @bug 5 bugs.

 */

#include <ostream>

/** @brief enum tutorial

 *

 *  Longer description of function:
 1) There are two types of enums 
 2) enums don't have methods in c++
 3) Don't use ALL_CAPS for enumerators

 4) don't have an enum where the objects have the same values (the enumerations
 become interchangeable), it might not be an error in c++ but it is poor coding
 practice! This should be avoided.

 5) Best practice: Don't assign specific values to your enumerators

 6) Best practice: Don't assign the same value to two enumerators in the same
 enumeration unless there's a very good reason.

 7) Enums are like a class in which all of the objects are predefined
 Enumerated types are incredibly useful for code documentation and readability
 purposes when you need to represent a specific, predefined set of states.

 */
enum class e { a = 1, b, c, d };

/** @brief prefix

 *

 *  Longer description of function: a decrementation function that is only used
 when the there is a prefix decrementation

 *

 *  @param e& x: the value being decremented

 *  @return x

 */
const e& operator--(e& x) noexcept {
  if (int(x) == 1) {
    x = e::d;  // :: is used to access the enum class in contrast to a regular
               // enum
  } else {
    x = static_cast<e>(int(x) - 1);
  }
  return x;
}

/** @brief postfix

 *

 *  Longer description of function: a decrementation function that is only used
 when the there is a postfix decrementation

 *

 *  @param e& x: the value being decremented

 *  @return x
 */
const e operator--(e& x, int) noexcept {
  if (int(x) == 1) {
    x = e::d;
  } else {
    x = static_cast<e>(int(x) - 1);
  }
  return x;
}
