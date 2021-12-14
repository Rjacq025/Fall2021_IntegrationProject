#pragma once
#include <ostream>

enum e { a = 1, b, c, d };

// prefix
e& operator--(e& x) {
  if (int(x) == 1) {
    x = d;
  } else {
    x = e(int(x) - 1);
  }
  return x;
}

// postfix
e operator--(e& x, int) {
  if (int(x) == 1) {
    x = d;
  } else {
    x = e(int(x) - 1);
  }
  return x;
}
