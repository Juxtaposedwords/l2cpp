#include <iostream>

using namespace std;

int main() {
  // Prefer underscores/snake_case with lowercase variable names.
  [[maybe_unused]] int value;  // conventional

  [[maybe_unused]] int
      Value;  // unconventional (should start with lower case letter)
  [[maybe_unused]] int
      VALUE;  // unconventional (should start with lower case letter)
  [[maybe_unused]] int VaLuE;  // unconventional (see your psychiatrist)  <--
                               // okay i liked this joke.

  [[maybe_unused]] int
      my_variable_name;  // conventional (separated by underscores/snake_case)
  [[maybe_unused]] int
  my_function_name();  // conventional (separated by underscores/snake_case)

  [[maybe_unused]] int myVariableName;  // conventional (intercapped/CamelCase)
  [[maybe_unused]] int
  myFunctionName();  // conventional (intercapped/CamelCase)

  //   int my variable name;   // invalid (whitespace not allowed)
  //   int my function name(); // invalid (whitespace not allowed)

  [[maybe_unused]] int
      MyVariableName;  // unconventional (should start with lower case letter)
  [[maybe_unused]] int
  MyFunctionName();  // unconventional (should start with lower case letter)

  return 0;
}