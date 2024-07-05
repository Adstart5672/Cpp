#include <iostream>
#include <string>

bool isMale;
bool isTall;

std::string answer;
std::string answer1;

void if1() {
  if (answer == "Yes") {
    isMale = true;
  } else {
    isMale = false;
  }
}

void if2() {
  if (answer1 == "Yes") {
    isTall = true;
  } else {
    isTall = false;
  }
}

void if3() {

  if (isMale && isTall) {
    std::cout << "Y";
  } else if (isMale && !isTall) {
    std::cout << "Yn";
  } else if (!isMale && isTall) {
    std::cout << "nY";

  } else {
    std::cout << "N";
  }
}

int main() {

  std::cout << "You Male?(Yws/No): ";
  std::getline(std::cin, answer);

  std::cout << "You Tall: ";
  std::getline(std::cin, answer1);

  return 0;
}
