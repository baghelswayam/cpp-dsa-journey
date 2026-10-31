#include <iostream>
using namespace std;

int main() {
    int start, end;
    int evenSum = 0, oddSum = 0;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            evenSum = evenSum + i;
        } else {
            oddSum = oddSum + i;
        }
    }

    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    return 0;
}