#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>  // for remove
using namespace std;

int main() {
    string eq;
    float a = 0, b = 0, c = 0, x1, x2, dis;

    cout << "Enter equation: ";
    getline(cin, eq);

    // Normalize: ^2 -> x2, remove spaces
    size_t caret = eq.find("^2");
    while (caret != string::npos) {
        eq.replace(caret, 2, "x2");
        caret = eq.find("^2", caret + 2);
    }
    eq.erase(remove(eq.begin(), eq.end(), ' '), eq.end());  // No spaces [web:117]

    cout << "Normalized: " << eq << endl;  // Debug

    // Parse a: before x2 (handle leading +/implicit 1)
    size_t x2_pos = eq.find("x2");
    if (x2_pos != string::npos) {
        string a_str = eq.substr(0, x2_pos);
        if (a_str.empty() || a_str == "+") a = 1;
        else try { a = stof(a_str); } catch(...) { a = 1; }
    }

    // Parse b: between x2 and next x or sign
    size_t b_start = (x2_pos != string::npos) ? x2_pos + 2 : 0;
    size_t x_pos = eq.find("x", b_start);
    if (x_pos != string::npos && eq[x_pos+1] != '2') {
        string b_str = eq.substr(b_start, x_pos - b_start);
        if (b_str.empty() || b_str == "+") b = 1;
        else try { b = stof(b_str); } catch(...) { b = 1; }
    }

    // Parse c: after b or x2 to =0
    size_t c_start = (x_pos != string::npos) ? x_pos + 1 : b_start;
    size_t eq_pos = eq.find("=0");
    if (eq_pos != string::npos) {
        string c_str = eq.substr(c_start, eq_pos - c_start);
        if (!c_str.empty()) try { c = stof(c_str); } catch(...) { c = 0; }
    }

    cout << "Parsed: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    if (a == 0) {
        cout << "Not quadratic (a=0)!" << endl;
        return 0;
    }

    dis = b*b - 4*a*c;
    if (dis > 0) {
        x1 = (-b + sqrt(dis)) / (2*a);
        x2 = (-b - sqrt(dis)) / (2*a);
        cout << "Roots: " << x1 << " and " << x2 << endl;
    } else if (dis == 0) {
        cout << "Root: " << -b / (2*a) << endl;
    } else {
        cout << "No real roots" << endl;
    }
    return 0;
}