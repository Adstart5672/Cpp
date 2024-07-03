#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string name;
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "Enter Your Name: ";
  getline(std::cin, name);
  std::cout << "Your name is " << name << " born in " << 2024 - age
            << std::endl;

  return 0;
}
