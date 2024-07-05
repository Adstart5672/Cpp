#include <iostream>

void saysHI(std::string name, int age) {
  std::cout << "Hi " << name << " you are " << age << std::endl;
}

int main(int argc, char *argv[]) {
  saysHI("Jordan", 18);
  saysHI("Halim", 15);
  saysHI("Ejie", 3829);
  return 0;
}
