#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int a, b = 1;
    
    cout << "Enter A Number: ";
    while (!(cin >> a)) {
        cout << "Invalid input. \nPlease enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    while (a < 0) {
        cout << "Enter A Valid Number: ";
        while (!(cin >> a)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    for (int x = 1; x <= a; x++) {
        b *= x;
    }
    
    cout << "The factorial of your number is = " << b;
    
    return 0;
}
