#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string color, pluralNoun, celebrity;

  std::cout << "Enter a color: ";
  getline(std::cin, color);

  std::cout << "Enter a plural noun: ";
  getline(std::cin, pluralNoun);

  std::cout << "Enter a celebrity: ";
  getline(std::cin, celebrity);

  std::cout << "Roses are " << color << std::endl;
  std::cout << pluralNoun << " are blue" << std::endl;
  std::cout << "I love " << celebrity << std::endl;
  return 0;
}
