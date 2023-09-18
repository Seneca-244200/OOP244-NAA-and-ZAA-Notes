#include  <iostream>
using namespace std;
void foo( int val ) {
   cout << val << endl;
}
void foo(const char s[] ) {
   cout << s << endl;
}
int main( ) {
   char name[] = { "Fred" };
   foo ( 20 ); // foo(int val = 20);
   foo( name );  // foo(const char s[] = name);
   foo( "Jack" ); // foo(const char s[] = "Jack");
    return 0;
}