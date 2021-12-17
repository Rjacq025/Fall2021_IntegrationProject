/** @file MailPerson_10.h

 *  @brief Header that houses code for week 10, the MailPerson section

 *

 *  Longer description of file: This header is used to display polymorphism from
 the MailPerson class through its inheritance of the person class

 *

 *  @author Richardson Jacques

 *  @bug 1 bugs.

 */

#pragma once
#include "Person_10.h"

/** @brief Mailperson child/sub/derived class

 *

 *  Longer description of function: This MailPerson class derives from the
 person_10 class and overrides the drive function

 *

 *  @return No return

 */
class MailPerson_10 : public Person_10 {
 private:
  // int num_parcels = 0; // not used
 public:
  std::string drive() override {
    return "slow";
  }  // If your expecting to override something use this in your funtion header
  std::string static deliver() { return "here's your package"; }
};
