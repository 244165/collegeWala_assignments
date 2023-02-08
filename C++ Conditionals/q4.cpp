#include <iostream>
using namespace std;
int main() {
int number;
cout << "Enter an integer: ";
cin >> number; // checks if the number is positive
if (number > 0)
cout << "You entered a positive integer: " << number << endl;
else
cout << "The number is negative and skipped ";
return 0;
}