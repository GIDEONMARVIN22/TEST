#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char operation;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;

    switch(operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b != 0) {
                result = a / b;
            } 
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator. " << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}