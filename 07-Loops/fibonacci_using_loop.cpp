#include <iostream>
using namespace std;

int main() {
int n;
long long a = 0, b = 1, c;


cout << "Enter the number of terms: ";
cin >> n;

if (n < 0) {
    cout << "Number of terms cannot be negative.";
    return 0;
}

for (int i = 1; i <= n; i++) {
    cout << a << " ";

    c = a + b;
    a = b;
    b = c;
}

return 0;


}
