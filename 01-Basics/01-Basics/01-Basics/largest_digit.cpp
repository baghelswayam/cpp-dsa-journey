#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int largest = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number > 0) {
        digit = number % 10;

        if (digit > largest) {
            largest = digit;
        }

        number = number / 10;
    }

    cout << "Largest digit = " << largest << endl;

    return 0;
}