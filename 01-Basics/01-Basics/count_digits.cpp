#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    cout << "Total digits: " << count << endl;

    return 0;
}