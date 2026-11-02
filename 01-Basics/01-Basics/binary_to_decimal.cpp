#include <iostream>
using namespace std;

int main() {
    int number;
    int binary = 0;
    int place = 1;

    cout << "Enter a non-negative decimal number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    if (number == 0) {
        cout << "Binary = 0" << endl;
        return 0;
    }

    while (number > 0) {
        int remainder = number % 2;

        binary = binary + remainder * place;
        place = place * 10;

        number = number / 2;
    }

    cout << "Binary = " << binary << endl;

    return 0;
}