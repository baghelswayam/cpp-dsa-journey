#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int key;
    bool found = false;

    cout << "Enter 5 elements: ";

    // Taking array input
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < 5; i++) {

        if (arr[i] == key) {
            cout << "Element found at index: " << i;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Element not found.";
    }

    return 0;
}