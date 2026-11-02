#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 1) {
        cout << "Not a perfect number." << endl;
        return 0;
    }

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number) {
        cout << "Perfect number" << endl;
    } else {
        cout << "Not a perfect number" << endl;
    }

    return 0;
}