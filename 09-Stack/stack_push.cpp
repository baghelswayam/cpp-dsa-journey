#include <iostream>
using namespace std;

int main() {
int stack[5];
int top = -1;
int n, value;


cout << "Enter number of elements: ";
cin >> n;

if (n < 0) {
    cout << "Number of elements cannot be negative.";
    return 0;
}

for (int i = 0; i < n; i++) {
    if (top == 4) {
        cout << "Stack Overflow\n";
        break;
    }

    cout << "Enter value: ";
    cin >> value;

    top++;
    stack[top] = value;
}

cout << "Stack elements: ";

for (int i = top; i >= 0; i--) {
    cout << stack[i] << " ";
}

return 0;


}
