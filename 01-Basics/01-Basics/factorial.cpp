#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative integers." << endl;
        return 0;
    }

    if (n > 20) {
        cout << "Number is too large for this program." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial << endl;

    return 0;
}