#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter 5 elements: ";

    // Taking input
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Counting even and odd elements
    for (int i = 0; i < 5; i++) {

        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    cout << "Even elements = " << evenCount << endl;
    cout << "Odd elements = " << oddCount;

    return 0;
}