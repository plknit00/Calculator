#include <iostream>
using namespace std;

class Calc {
private:
  float x, y;

public:
  void user_input() {
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
  }

  void add() {
    cout << "The sum of " << x << " and " << y << " is " << x + y << endl
         << endl;
  }
  void sub() {
    cout << "The difference of " << x << " and " << y << " is " << x - y << endl
         << endl;
  }
  void mult() {
    cout << "The product of " << x << " and " << y << " is " << x * y << endl
         << endl;
  }
  void div() {
    cout << "The quotient of " << x << " and " << y << " is " << x / y << endl
         << endl;
  }
};