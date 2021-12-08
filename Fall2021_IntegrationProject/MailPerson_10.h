#pragma once
#include "Person_10.h"

class MailPerson_10 : public Person_10 {
 private:
  int num_parcels = 0;
 public:
  std::string drive() override { return "slow"; } // If your expecting to override something use this in your funtion header
  std::string deliver() { return "here's your package"; }
};
