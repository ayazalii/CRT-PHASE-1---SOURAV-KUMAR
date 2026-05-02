// wap that takes two numbers and operators as input from user, perform the corresponding arithmetic operations and print the result.
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;

        case '/':
            result = num1 / num2;  // assume user doesn't enter 0
            cout << "Result: " << result;
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}