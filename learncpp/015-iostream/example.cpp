#include <iostream>

int main() {
  std::cout << "Hello"
            << "whorl!";
  // prints "Hellowhorl!"
  std::cout << "\n";  // for readability

  // A new  call doesn't mean a new line.
  std::cout << "Hello";
  std::cout << "whorl!";
  // prints: Hellowhorl!
  std::cout << "\n";  // for readability

  int x{5};
  std::cout << "x is equal to: " << x;
  std::cout << "\n";  // for readability

  // But there's a better way for newlines, but it also flushes the cache.
  std::cout << "Hi!" << std::endl;  // std::endl will send a new line character
                                    // AND flushes the buffer.
  std::cout << "Hi!" << std::endl;
  /*
  Prints:
  Hi!
  Hi!
  */

  int x{5};
  std::cout << "x is equal to: " << x << '\n';  // Using '\n' standalone
  std::cout
      << "And that's all, folks!\n";  // Using '\n' embedded into a
                                      // double-quoted piece of text (note: no
                                      // single quotes when used this way)

  return 0;
}
