#include <iostream>
using namespace std;

int main() {
    int number, first, last;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    if (number == 0) {
        first = 0;
        last = 0;
    } else {
        last = number % 10;

        while (number >= 10) {
            number = number / 10;
        }

        first = number;
    }

    cout << "First digit = " << first << endl;
    cout << "Last digit = " << last << endl;
    cout << "Sum = " << first + last << endl;

    return 0;
}