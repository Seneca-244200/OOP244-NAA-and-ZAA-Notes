#include <iostream>
#include "Str.h"
using namespace std;
namespace seneca {
   Str::Str( ) {
      m_data = nullptr;
   }
   Str::~Str( ) {
      delete[] m_data;
   }
   void Str::print( ) const {
      if ( m_data ) cout << m_data;
   }
}