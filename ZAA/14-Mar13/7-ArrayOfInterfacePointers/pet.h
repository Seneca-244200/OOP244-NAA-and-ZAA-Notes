#ifndef SDDS_PET_H__
#define SDDS_PET_H__
#include <iostream>
#include "animal.h"

namespace sdds{
  class Pet:public Animal{
    char m_name[41];
  public:
    Pet(const char* name = "Nameless");
    const char* name()const;
    void name(const char* value);
    void move()const;
    void sound()const;
    ~Pet();
  };
  std::ostream& operator<<(std::ostream& ostr, const Pet& p);




}
#endif