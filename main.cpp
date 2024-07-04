#include <alloca.h>
#include <cmath>
#include <iostream>
int main(int argc, char *argv[]) {
  int g = 90;
  std::cout << "Hwllo Qoeld" << std::endl;
  std::cout << "          /|" << std::endl;
  std::cout << "         / |" << std::endl;
  std::cout << "        /  |" << std::endl;
  std::cout << "       /   |" << std::endl;
  std::cout << "      /____|" << std::endl;
  std::cout << g << std::endl;

  g = 10;
  std::cout << "G =" << g << std::endl;
  std::string hp = "Hhshs";
  int h = 20;
  char pp = 'Z';
  double fg = 3.1462728291029291209110;
  bool isGay = false;

  /*  std::cout << hp << std::endl;
  // std::cout << h << std::endl;
  //  std::cout << pp << std::endl;
  // std::cout << fg << std::endl;*/
  std::cout << isGay << std::endl;
  std::cout << hp.length() << std::endl;
  std::cout << hp[0] << std::endl;
  hp[1] = 'B';
  std::cout << hp << std::endl;
  hp = "Termux alacritty";
  std::cout << hp.find("alacritty", 0) << std::endl;
  std::cout << hp.substr(0, 6) << std::endl;
  std::cout << 40 % 20;
  h++;
  std::cout << h << std::endl;
  std::cout << pow(2, 2) << std::endl;
  std::cout << sqrt(36) << std::endl;
  std::cout << round(4.3) << std::endl;
  std::cout << round(4.7) << std::endl;
  std::cout << ceil(4.1) << std::endl;
  std::cout << floor(4.9) << std::endl;
  std::cout << fmax(3, 7) << std::endl;
  std::cout << fmin(6, 10) << std::endl;
  return 0;
}
