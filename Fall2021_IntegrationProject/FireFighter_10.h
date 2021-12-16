/** @file FireFighter_10.h

 *  @brief Header that houses code for week 10, the firefighter section

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug 2 bugs.

 */

#pragma once
#include"Person_10.h"
class FireFighter_10 : public Person_10 {
 public:
  std::string drive() override { 
	  return "fast"; 
  }
};
