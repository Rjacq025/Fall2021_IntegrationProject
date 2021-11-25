//
// Templates carry over data types
// contaainer stores multiple datatypes like vectors or arrays
//

/*

#include "GenericsTemplates_12.h"

#include <iostream>
using namespace std;

class Aiden {
 public:
  Aiden(){

  };
};

template <typename T>
T add_nums(T num1, T num2);

template <typename T>
T return_it(T thing) {
  return thing;
}

int main() {
  int int1 = 1;
  int int2 = 2;
  std::cout << add_nums(int1, int2) << endl;
  double dbl1 = 1;
  double dbl2 = 2;
  std::cout << add_nums(dbl1, dbl2) << endl;
  string str1 = "1";
  string str2 = "2";
  std::cout << add_nums(str1, str2) << endl;
  Aiden myAiden;
  return_it(myAiden);
  return 0;
}

template <typename T>
T auto add_nums(T num1, T num2) {
  return num1 + num2;
}
*/