#include <iostream>
using namespace std;
int main() {

  // Declare & initialize pointer
  int var = 43;
  int *p = &var; // The address of the variable (&)

  cout << "Var: " << var << endl;
  cout << "Pointer (address in memory) : " << p << endl;

  int var2 = 50;
  p = &var2;  // Corrected line: assigning the address of var2 to p

  cout << "Var: " << var2 << endl;
  cout << "Pointer (address in memory) : " << p << endl;
  return 0;
}
