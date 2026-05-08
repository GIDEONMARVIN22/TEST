#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Please input the first number: ";
    cin >> a;

    cout << "Please input the operator: ";
    cin >> op;

    cout << "Please input the second number: ";
    cin >> b;

    switch (op) {
        case '+':
            result = a + b;
            cout << "The result is: " << result << endl;
            break;

        case '-':
            result = a - b;
            cout << "The result is: " << result << endl;
            break;

        case '*':
            result = a * b;
            cout << "The result is: " << result << endl;
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                cout << "The result is: " << result << endl;
            } else {
                cout << "Error: division by zero" << endl;
            }
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}