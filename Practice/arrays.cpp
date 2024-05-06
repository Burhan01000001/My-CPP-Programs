#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare An Array To Store Marks Of Students
    int marksOfStudents[5];
    int i = 0, j = 0, x = 1;
    
    // Running While Loop To Take Marks As Input From User
    while(i < 5){
        cout << "Enter Marks Here: ";
        cin >> marksOfStudents[i];
        i++;
    }
    // Clearing All Values Added By User
    system("clear");
    
    cout << "\n\n\n";
    
    // Executing A While Loop To To Print Marks Added By User On The Screen
    while(j < 5){
        cout << setw(50) << "Student " << x <<": " << marksOfStudents[j] << endl;
        j++;
        x++;
    }
    
    return 0;
}
