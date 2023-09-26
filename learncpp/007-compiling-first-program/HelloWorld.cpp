#include <iostream>
#include <limits>
int main() {
  std::cout << "Hello, whorl!";
  // Added to allow time for use to inspect (though vscode debug allows this)
  std::cin.clear();  // reset any error flags

  // ignore any characters in the input buffer until we
  // find a newline
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cin.get();  // get more char from teh user (Waits for you to press enter)

  return 0;
}