#include <iostream>
using namespace std;

int main() {
    // Input a 3-digit number from the user
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Extract digits
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    // Display the digits on separate lines
    cout << digit1 << endl;
    cout << digit2 << endl;
    cout << digit3 << endl;

    return 0;
}
