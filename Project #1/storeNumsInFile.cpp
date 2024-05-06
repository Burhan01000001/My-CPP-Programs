#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{

    int num = 0;
    string tempStr;

    ofstream myFile;
    myFile.open("myFile.txt");
    if (!myFile.is_open())
    {
        cout << "ERROR! File failed to open!";
    }

    while (num <= 10)
    {
        myFile << num << endl;
        num += 1;
    }
    myFile.close();

    ifstream myFile2;
    myFile2.open("myFile.txt");
    if (!myFile2.is_open())
    {
        cout << "ERROR! File failed to open!";
    }
    while (getline(myFile2, tempStr))
    {
        cout << tempStr << endl;
    }
    myFile2.close();

    return 0;
}