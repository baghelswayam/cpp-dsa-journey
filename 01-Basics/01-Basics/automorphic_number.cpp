#include <iostream>
using namespace std;

int main() {
    long long number, square, temp;
    long long divisor = 1;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number.";
        return 0;
    }

    square = number * number;
    temp = number;

    while (temp > 0) {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == number) {
        cout << number << " is an Automorphic Number.";
    } else {
        cout << number << " is not an Automorphic Number.";
    }

    return 0;
}