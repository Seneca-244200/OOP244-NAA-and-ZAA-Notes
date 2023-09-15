#include <iostream>
using namespace std;
int main( ) {
   int i(3);
   int k = 3;
   int l{ 3 };
   cout << i << endl;
   int j{};
   cout << j << endl;
   j = 3;
   cout << j << endl;

   return 0;
}