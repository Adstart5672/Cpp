#include <iostream>

int main(int argc, char *argv[]) {
  int num1, num2;
  char op;
  int result;

  std::cout << "Enter a first number: ";
  std::cin >> num1;

  std::cout << "Entet a operator: ";
  std::cin >> op;

  std::cout << "Enter a second number: ";
  std::cin >> num2;

  if (op == '+') {
    result = num1 + num2;
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '/') {
    result = num1 / num2;
  } else if (op == '*') {
    result = num1 * num2;
  } else {
    std::cout << "Invalid Operator";
    return 1;
  }
  std::cout << "Result :" << result;
  return 0;
}
