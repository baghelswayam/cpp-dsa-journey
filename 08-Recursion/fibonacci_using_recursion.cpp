#include <iostream>
using namespace std;

long long fibonacci(int n) {
if (n == 0) {
return 0;
}


if (n == 1) {
    return 1;
}

return fibonacci(n - 1) + fibonacci(n - 2);


}

int main() {
int n;


cout << "Enter the number of terms: ";
cin >> n;

if (n < 0) {
    cout << "Number of terms cannot be negative.";
    return 0;
}

if (n > 92) {
    cout << "Number of terms is too large.";
    return 0;
}

for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
}

return 0;


}
