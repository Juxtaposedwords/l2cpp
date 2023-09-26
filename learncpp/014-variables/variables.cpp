#include <iostream>

int main() {
  int width;
  width = 5;  // copy assignment value of 5 into variable width

  std::cout << width;  // prints 5
  std::cout << "\n";

  width = 7;  // change value stored in variable width to 7

  std::cout << width << 3;  // print 7
  std::cout << "\n";

  // Let's talk over the basics
  // [[maybe_unused]] prevents 'variable not used' errors.
  [[maybe_unused]] int a;  // no initializer (default initialization)
  // std::cout << a; would fail as unlike in Golang, there is no default
  // initializer/zero value.
  [[maybe_unused]] int b =
      5;  // initializer after equals sign ( copy initialization)
  [[maybe_unused]] int c(
      6);  // initializer in parenthesis (Direct initialization)

  // List initialization methods (C+11) (preferred)
  // initializer in braces (direct list initialization)
  [[maybe_unused]] int d{7};
  // initializer in braces after equal sign  (copy list initialization)
  [[maybe_unused]] int e = {8};
  // std::cout << e;  // would fail as list are not printable
  int f{};         // initializer is empty braces {value initialization}
  std::cout << f;  // prints '0' (like Go zero values)
  return 0;
}
