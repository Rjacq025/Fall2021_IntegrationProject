/** @file StringsAsObjNspcEx_6.h

 *  @brief Header that houses code for week 6 section

 *

 *  Longer description of file: This header file show how to save to a computer
 file and how to read from it via code.

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

// Namespaces: a set of signs (names) that are used to identify and refer to
// objects of various kinds. A namespace ensures that all of a given set of
// objects have unique names so that they can be easily identified. kind of like
// license plates the numbers can be the same but they are on different cars.

#include <iostream>

/** @brief shows how code can save data to a file

 *  @return void

 */
void demo_save_to_file() {
  std::ofstream myfile("example.txt");
  // class object
  // class is kind of like a data type
  // an object is kind of like a variable
  if (myfile.is_open())  // is_open is a function in
                         // the class aka a method
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    std::cout << "Text save to file\n";
    myfile.close();
  } else
    std::cout << "Unable to open file";
}

// strings are technically a class
// line is technically a variable

/** @brief Shows how code can pull data from a file

 *  @return void

 */
void demo_read_from_file() {
  std::string line;
  std::ifstream myfile("example.txt");
  if (myfile.is_open()) {
    while (std::getline(myfile, line)) {
      std::cout << line << '\n';
    }
    myfile.close();
  }

  else
    std::cout << "Unable to open file";
}
