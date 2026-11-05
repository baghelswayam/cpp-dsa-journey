#include <iostream>
using namespace std;

int main() {

    int arr[5];

    cout << "Enter 5 elements: ";

    // Taking input
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Assume first element is smallest
    int min = arr[0];

    // Finding smallest element
    for (int i = 1; i < 5; i++) {

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Smallest element = " << min;

    return 0;
}