#include <iostream>

using namespace std;

void doNothing(
    int &)  // Don't worry about what & is for now, we're just using it to trick
            // the compiler into thinking variable x is used
{}

int main() {
  // Undefined behavior:
  // define an integer variable named x.  To properly delcare we would use int x
  // {0};
  int x;  // this variable is uninitialized

  // make the compiler think we're assigning a value to this variable
  doNothing(x);

  // print the value of x to the screen (who knows what we'll get, because x is
  // uninitialized)
  std::cout << x << '\n';

  // Implementation-defined behavior
  // print how many bytes of memory an int value takes
  std::cout << sizeof(int) << '\n';

  // Prints 4 or 2 depending on the compiler!

  return 0;
}