#include <iostream>
using namespace std;

int main() {
    int number, original, digit, sum = 0;

    cout << "Enter a three-digit number: ";
    cin >> number;

    original = number;

    while (number > 0) {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if (sum == original) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}