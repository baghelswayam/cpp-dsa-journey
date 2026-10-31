#include <iostream>
using namespace std;

int main() {
    int a, b, remainder;

    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "GCD = " << a << endl;

    return 0;
}