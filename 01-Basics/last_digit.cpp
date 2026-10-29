#include <iostream>
using namespace std;

int main() {
int number;


cout << "Enter a number: ";
cin >> number;

int lastDigit = number % 10;

cout << "Last digit = " << lastDigit << endl;

return 0;


}
