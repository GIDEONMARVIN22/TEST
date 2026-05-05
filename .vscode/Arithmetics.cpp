#include <iostream>
#include <cmath>
using namespace std;

int main() {


    cout << "Enter the value of n: " <<"\n";
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << pow(i, 2) << " ";

    
    }
    return 0;
}