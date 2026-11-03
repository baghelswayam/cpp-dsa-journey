#include <iostream>
using namespace std;

int main() {
    int number, temp, digit;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive number.";
        return 0;
    }

    temp = number;

    // Calculate the sum of digits
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    // Check Harshad Number
    if (number % sum == 0) {
        cout << number << " is a Harshad Number.";
    } else {
        cout << number << " is not a Harshad Number.";
    }

    return 0;
}