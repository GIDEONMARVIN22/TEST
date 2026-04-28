#include <iostream>
#include <cmath>
using namespace std;

int main(){
//program to compute sum of squares from 1 to n(10)

int n=10;
int sum=0;
for (int i = 1; i <= n; i++) {
  sum += pow(i, 2);
}
cout << "The sum of squares from 1 to " << n << " is: " << sum << "\n";


    return 0;
}