#include <stdio.h>  // for std::printf

#include <iostream>  // for std::ccout and std::cin

int main() {
  std::cout << "Enter a number: ";  // Ask the user for a number.

  int a{};  // Define variable x to hold user input (and zero initialize it).
  std::cin >> a;  // Get number the keyboard and store it in the variable x.

  std::cout << "You entered " << a << '\n';
  // Note that typing a letter returns 'You entered 0'. Why is that?

  std::cout << "Enter two numbers separated by a space: ";

  int x{};  // Define variable x to hold user input (and zero-initialize it).
  int y{};  // Define variable x to hold user input (and zero-initialize it).

  // Note: cin is using space delimiters. It is possible to change this
  // delimiter
  // https://stackoverflow.com/questions/7302996/changing-the-delimiter-for-cin-c
  std::cin >> x >> y;  // you get two numbers and store the variables in x and y
                       // respectively.

  std::cout << "You entered " << x << " and " << y << '\n';
  // Which more experienced audience goers will know as:
  std::printf("You entered %d and %d\n", x, y);

  return 0;
}