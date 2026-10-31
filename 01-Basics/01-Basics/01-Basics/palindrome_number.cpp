#include <iostream>
using namespace std;

int main() {
    int number, original, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number > 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}