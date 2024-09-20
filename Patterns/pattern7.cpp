// Hollow Diamond pattern

//            *
//          *   *
//        *       *
//      *           *
//        *       *
//          *   *
//            *

#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter the number of rows: ";
  cin >> n;

  // top part
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) { // spaces
      cout << " ";
    }
    cout << "*";

    if (i != 0) {
        //spaces
      for (j = 0; j < (2 * i - 1); j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

  // bottom part
  for (i = 0; i < n - 1; i++) {
    // spaces
    for (j = 0; j < i + 1; j++) {
      cout << " ";
    }
    cout << "*";
    if (i != n - 1) {
      // spaces
      for (j = 0; j < 2 * (n - i) - 5; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}