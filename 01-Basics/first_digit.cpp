#include <iostream>
using namespace std;

int main() {
int number;


cout << "Enter a number: ";
cin >> number;

while (number >= 10) {
    number = number / 10;
}

cout << "First digit = " << number << endl;

return 0;


}
