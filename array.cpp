#include <iostream>

int main(int argc, char *argv[]) {
  int arrRAY[100] = {20, 10, 27, 57, 13, 82};

  arrRAY[45] = 58;

  std::cout << arrRAY[4] << "" << arrRAY[45];
  return 0;
}
