#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, remainder;

    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    int gcd = x;
    int lcm = (a / gcd) * b;

    cout << "LCM = " << lcm << endl;

    return 0;
}