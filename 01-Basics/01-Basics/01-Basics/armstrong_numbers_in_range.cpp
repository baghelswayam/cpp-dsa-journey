#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    if (start < 0 || end < 0 || start > end) {
        cout << "Please enter a valid non-negative range.";
        return 0;
    }

    cout << "Armstrong numbers: ";

    for (int number = start; number <= end; number++) {
        int temp = number;
        int digits = 0;
        int sum = 0;

        // Count digits
        int countTemp = number;

        do {
            digits++;
            countTemp /= 10;
        } while (countTemp > 0);

        // Calculate sum of digit powers
        do {
            int digit = temp % 10;
            int power = 1;

            for (int i = 1; i <= digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;

        } while (temp > 0);

        if (sum == number) {
            cout << number << " ";
        }
    }

    return 0;
}