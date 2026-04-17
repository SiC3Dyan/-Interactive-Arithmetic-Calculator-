#include <iostream>
using namespace std;

int main () {
  char op, choice;
  double num1, num2, result;

  cout << "Welcome to the Interactive Arithmethic Calculator!" << endl;

  do {
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter an Arithmetic Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    switch(op) {
      case: "+"
        result = num1 + num2;

      case: "-"
        result = num1 - num2;

      case: "*"
        result = num1 * num2;

      case: "/"
        if (num2 !=0) {
        result = num1/num2;
        cout << "Result: " << num1 << "/" << num2 << "=" << result << endl; 
        } else {
        cout << "Error: Division by zero is not allowed." << endl;
        }
      break;
  
      default:
      cout << "Invalid operator entered. Please Enter +, -, *, /." << endl;
      break;
      }

    cout << "Do you want to perform another Operation? (y/n): ";
    cin >> choice;
  } while {
    
  }
}
