#include <iostream>
using namespace std;


int main() {

double a , b, result;
char op;

cout << "Enter first number: ";
cin >> a;
cout << "Enter operator (+, -, *, /): ";
cin >> op;
cout << "Enter second number: ";
cin >> b;

switch(op) {
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
        result = a / b;
        break;
    default:
        cout << "Invalid operator!" << endl;
        return 1;
}

cout << "Result: " << result << endl;

return 0;