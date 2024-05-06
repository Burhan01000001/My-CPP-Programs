#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    char userInput[20];

    cout << "Enter some text: ";
    cin.getline(userInput, 20);

    cout<<(string) (userInput[20]);

    return 0;
}