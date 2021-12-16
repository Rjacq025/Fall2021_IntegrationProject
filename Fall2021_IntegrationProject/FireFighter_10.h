/** @file filename.cpp

 *  @brief Brief description of file.

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
