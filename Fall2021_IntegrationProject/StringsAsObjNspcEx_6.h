/** @file filename.cpp

 *  @brief Brief description of file.

 *

 *  Longer description of file.

 *

 *  @author Richardson Jacques

 *  @bug No known bugs.

 */

#pragma once

// Define namespaces


void demo_save_to_file() {
  std::ofstream myfile("example.txt");
  // class object
  // class is kind of like a data type
  // an object is kind of like a variable
  if (myfile.is_open()) // is_open is a function in
      // the class aka a method
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    std::cout << "Text save to file\n";
    myfile.close();
  } else
    std::cout << "Unable to open file";
}

//strings are technically a class
// line is technically a variable
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
