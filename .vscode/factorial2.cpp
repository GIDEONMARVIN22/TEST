#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    // This program calculates the factorial of a number n
int n;
cout << "Enter a positive integer: ";
cin >> n;

if (n < 0) {
    cout << "Error - factorial is not defined for negative numbers." << endl;
} else {
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is " << factorial << "." << endl;
}


    return 0;
}