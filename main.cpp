#include "calc.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int choice;
  Calc c;

  while (choice != 5) {
    cout << "Select opperation:" << endl;
    cout << "1. addition" << endl;
    cout << "2. subtraction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. division" << endl;
    cout << "5. exit" << endl;
    cout << "Choice: ";
    cin >> choice;
    if (choice == 5) {
      break;
    } else {
      if (choice == 1) {
        c.user_input();
        c.add();
      } else if (choice == 2) {
        c.user_input();
        c.sub();
      } else if (choice == 3) {
        c.user_input();
        c.mult();
      } else if (choice == 4) {
        c.user_input();
        c.div();
      } else {
        cout << "Invalid input. Please select a number 1-5." << endl << endl;
      }
    }
  }
  cout << "Calculations complete!" << endl;
  return 0;
}