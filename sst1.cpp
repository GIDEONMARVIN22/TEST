#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, sum, sr;

    cout << "Enter the value of a: "; 
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    sum = a * a + b * b;
    sr = sqrt(sum);
    cout << "The square root of the sum of squares is: " << sr << endl;
    return 0;
}