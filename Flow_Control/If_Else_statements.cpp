#include <iostream>

int main() {

  int num1 = 60;
  int num2 = 55;

  bool result = (num1 > num2);
  std::cout << std::boolalpha << "Result : " << result << std::endl;

  std::cout << std::endl;

  if (result == true) {
    std::cout << num1 << " is greater than " << num2 << std::endl;
  }
  else {
    std::cout << num1 << " is less than " << num2 << std::endl;
  }
  return 0;
}
