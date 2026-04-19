#include <iostream>
using namespace std;

int main () {
  char op, choice
  double num1, num2, result;

  cout << "Welcome to the Interactive Arithmethic Calculator!" << endl;

  do {
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter an Arithmethic Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    switch(op) {
      case: "+"
        result = num1 + num2;
      cout << "Result: " << num1 << "+" << num2 << result << endl;
      break;

      case: "-"
        result = num1 - num2;
      cout << "Result: " << num1 << "-" << num2 << results << endl;
      break;

      case: "*"
        result = num1 * num2;
      cout << "Result: " << num1 << "*" << num2 << result << endl;
      break;
      
    }
  }
}
}
