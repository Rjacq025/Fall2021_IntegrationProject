/** @file Continue.h

 *  @brief Brief description of file.

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

#include <iostream>

std::string continue_program_word;

void continue_program_function() { 
	// This is just a function that sort of acts as a buffer between the current week and having to re-choose a new week
	std::cout << "\n\nPlease type a key to CONTINUE:\n\n";
	std::cin >> continue_program_word;
}
