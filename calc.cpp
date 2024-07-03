#include <iostream>

int main(int argc, char *argv[]) {
  int num1, num2;
  std::cout << "Enter first Number: ";
  std::cin >> num1;
  std::cout << "\n";

  std::cout << "Enter a second Number: ";
  std::cin >> num2;
  std::cout << "\n";

  std::cout << "= " << num1 + num2 << std::endl;
  return 0;
}
