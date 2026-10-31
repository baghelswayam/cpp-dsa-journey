#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Please enter a non-negative exponent." << endl;
        return 0;
    }

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << "Result = " << result << endl;

    return 0;
}