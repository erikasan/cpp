#include <iostream>

using namespace std;

int main(){
  int ival = 42;
  int *p = &ival; // p is a pointer and holds the address of ival by using the
                  // &-operator

  cout << *p << endl; // Yields the object which p points to by using the
                      // *-operator (prints 42)

  cout << p << endl; // Yields the address of ival

  *p = 0;            // We can assign a new value to ival by using *p

  cout << ival << endl; // prints 0

  int jval = 69;

  p = &jval;         // p is now a pointer to jval

  return 0;
}
