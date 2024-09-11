#include <iostream>

int main() {

  const int COUNT = 10;
  size_t i = 0;
  do {
    std::cout << i << " : This is DO While in C++" << std::endl;
    ++i;
  } while (i < COUNT);
  return 0;
}