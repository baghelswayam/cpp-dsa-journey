#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int evenCount = 0, oddCount = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number == 0) {
        evenCount = 1;
    } else {
        while (number > 0) {
            digit = number % 10;

            if (digit % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }

            number = number / 10;
        }
    }

    cout << "Even digits = " << evenCount << endl;
    cout << "Odd digits = " << oddCount << endl;

    return 0;
}