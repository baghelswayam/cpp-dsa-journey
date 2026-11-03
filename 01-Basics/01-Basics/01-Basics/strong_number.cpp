#include <iostream>
using namespace std;

int main() {
    int number, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number.";
        return 0;
    }

    original = number;

    do {
        digit = number % 10;

        int fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        number = number / 10;

    } while (number > 0);

    if (sum == original) {
        cout << original << " is a Strong Number.";
    } else {
        cout << original << " is not a Strong Number.";
    }

    return 0;
}