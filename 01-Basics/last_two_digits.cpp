#include <iostream>
using namespace std;

int main() {
int number;


cout << "Enter a number: ";
cin >> number;

int result = number % 100;

cout << "Last two digits = " << result << endl;

return 0;


}
