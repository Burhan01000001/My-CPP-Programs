#include <bits/stdc++.h>

using namespace std;

void fileCloner(string x)
{

    string tempStr;

    ofstream myFile, myNewFile;
    ifstream tempFile;

    myFile.open("myFile.txt");
    myFile << x;
    myFile.close();

    tempFile.open("myFile.txt");

    myNewFile.open("myNewFile.txt");

    while (getline(tempFile, tempStr))
    {
        cout << tempStr;
        myNewFile << tempStr;
    }

    myNewFile.close();
    tempFile.close();
}

int main()
{

    string info;

    cout << "Write some text: ";
    getline(cin, info);

    fileCloner(info);

    return 0;
}
