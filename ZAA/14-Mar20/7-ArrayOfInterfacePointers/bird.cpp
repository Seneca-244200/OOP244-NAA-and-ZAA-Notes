#include <iostream>
#include "Utils.h"
using namespace std;
#include "bird.h"

namespace sdds{


  Bird::Bird(const char* name) :Pet(name){
     cout << "Creating " << *this << " the Bird" << endl;
  }
  void Bird::act()const{
    cout << "Act playful, " << name() << " the Bird" << endl;
  }
  void Bird::move()const{
    fly();
  }
  void Bird::sound()const{
    cout << "Tweet!" << endl;
  }
  Bird::~Bird(){
    cout << "Remove " << *this << " the Bird" << endl;
  }
}