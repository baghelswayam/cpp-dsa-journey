#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive number.";
        return 0;
    }

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    cout << "Sum of proper divisors: " << sum << endl;

    if (sum > number) {
        cout << number << " is an Abundant Number.";
    } else {
        cout << number << " is not an Abundant Number.";
    }

    return 0;
}