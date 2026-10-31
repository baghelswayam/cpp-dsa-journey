#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}