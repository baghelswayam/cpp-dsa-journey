    #include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[6];

    cout << "Enter 6 elements: ";

    // Taking input
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Finding largest and second largest
    for (int i = 0; i < 6; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest &&
                 arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "Second largest distinct element does not exist.";
    }
    else {
        cout << "Largest element = " << largest << endl;
        cout << "Second largest element = " << secondLargest;
    }

    return 0;
}