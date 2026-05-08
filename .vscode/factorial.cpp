#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long product = 1;

    if (n < 0) {
        cout << "Factorial does not exist for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            product *= i;
        }
        cout << n << "! = " << product << endl;
    }

    return 0;
}