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

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    // Finding smallest and second smallest
    for (int i = 0; i < 6; i++) {

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest &&
                 arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        cout << "Second smallest distinct element does not exist.";
    }
    else {
        cout << "Smallest element = " << smallest << endl;
        cout << "Second smallest element = " << secondSmallest;
    }

    return 0;
}