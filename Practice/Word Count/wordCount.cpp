#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n = 0, wordCount = 0;
    char userInput[15];

    cout << "Enter some text: ";
    cin.getline(userInput, 15);

    cout<<userInput;

    while (n!=sizeof(userInput))
    {
        if (userInput[n]=='\0')
        {
            wordCount++;
        }
        n++;
    }

    cout<<"Number of words in the sentence: "<<wordCount;

    return 0;
}