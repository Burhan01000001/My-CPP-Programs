#include<iostream>

using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Casting the character to an integer to get its ASCII code
    int asciiCode = int(ch);

    cout << "The ASCII code of '" << ch << "' is: " << asciiCode << endl;
    
    return 0;
}