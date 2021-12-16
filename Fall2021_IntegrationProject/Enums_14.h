/** @file Enums_14.h

 *  @brief Header that houses code for week 14 section

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug 5 bugs.

 */

#include <ostream>

enum class e { a = 1, b, c, d };

// prefix
const e& operator--(e& x) noexcept {
  if (int(x) == 1) {
    x = e::d;  // :: is used to access the enum class in contrast to a regular
               // enum
  } else {
    x = static_cast<e>(int(x) - 1);
  }
  return x;
}

// postfix
const e operator--(e& x, int) noexcept {
  if (int(x) == 1) {
    x = e::d;
  } else {
    x = static_cast<e>(int(x) - 1);
  }
  return x;
}
