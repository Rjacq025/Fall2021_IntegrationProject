/** @file Continue.h

 *  @brief Header file that houses the code for the continue_program_function

 *

 *  Longer description of file: This is just a function that sort of acts as a
 buffer between the current week and having to re-choose a new week

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

#include <iostream>

std::string continue_program_word;

/** @brief Program pacing buffer.

 *

 *  Longer description of function: This is just a function that sort of acts as a
 buffer between the current week and having to re-choose a new week

 *

 *  @return Void

 */
void continue_program_function() {
  std::cout << "\n\nPlease type a key to CONTINUE:\n\n";
  std::cin >> continue_program_word;
}
