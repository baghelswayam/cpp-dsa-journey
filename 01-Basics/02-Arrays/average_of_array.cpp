#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int sum = 0;
    double average;

    cout << "Enter 5 elements: ";

    // Taking input
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Calculating sum
    for (int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    // Calculating average
    average = (double)sum / 5;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}