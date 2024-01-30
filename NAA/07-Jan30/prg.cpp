#include <iostream>
#include "MyStr.h"
using namespace std;
using namespace seneca;
int main( ) {
   MyStr S = "Hello there!!!";
   MyStr T("Hello there!!!", 5);
   S.print( );
   T.print( );
   return 0;
}