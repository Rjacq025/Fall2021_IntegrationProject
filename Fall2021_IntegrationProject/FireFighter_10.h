/** @file FireFighter_10.h

 *  @brief Header that houses code for week 10, the firefighter section

 *

 *  Longer description of file: This header is used to display polymorphism from
 the firefighter class through its inheritance of the person class

 *

 *  @author Richardson Jacques

 *  @bug 2 bugs.

 */

#pragma once
#include "Person_10.h"

/** @brief FireFighter child/sub/derived class

 *

 *  Longer description of function: This firefighter class derives from the person_10 class and overrides the drive function

 *

 *  @return No return

 */
class FireFighter_10 : public Person_10 {
 public:
  std::string drive() override { return "fast"; }
};
