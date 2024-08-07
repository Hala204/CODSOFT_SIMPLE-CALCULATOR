#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
        }
        else {
            cout << "Error: Division by zero";
        }
        break;
    default:
        cout << "Error: Invalid operation";
        break;
    }

    cout << endl;
}
