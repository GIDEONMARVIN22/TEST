#include <iostream>
using namespace std;

int main(){

cout <<"Enter all types of gender F/M: " <<endl;
char gender;
cin >> gender;

switch (gender) {
    case 'F':
    cout << "Female" << endl;
    break;
    case 'M':
    cout << "Male" << endl;
    break;
    default:
    cout << "Invalid input" << endl;
}
    return 0;
}