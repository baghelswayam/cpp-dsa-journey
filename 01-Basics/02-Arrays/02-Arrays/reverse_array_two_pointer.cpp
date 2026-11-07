#include <iostream>
using namespace std;

int main() {

    int arr[6];

    cout << "Enter 6 elements: ";

    // Taking input
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = 5;

    // Reversing using two pointers
    while (left < right) {

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Printing reversed array
    cout << "Reversed array: ";

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}