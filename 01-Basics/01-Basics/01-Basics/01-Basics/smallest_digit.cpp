#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int smallest = 9;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number > 0) {
        digit = number % 10;

        if (digit < smallest) {
            smallest = digit;
        }

        number = number / 10;
    }

    cout << "Smallest digit = " << smallest << endl;

    return 0;
}