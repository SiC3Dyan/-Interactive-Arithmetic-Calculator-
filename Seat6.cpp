/* RAINE CEDRIC P. CRUZ CSS121P_FOPM03 */

#include <iostream>
using namespace std;

int main () {
    char op, choice;
    double num1, num2, result;

    cout << "Welcome to the Interactive Arithmetic Calculator!" << endl;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter an arithmetic operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch(op) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl; 
                }
                break;
                
            default:
                cout << "Invalid operator entered. Please enter +, -, *, or /." << endl;
                break;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}

