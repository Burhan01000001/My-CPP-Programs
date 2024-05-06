#include <iostream>

using namespace std;

int main() {
    int hrs_1, min_1, sec_1;
    int hrs_2, min_2, sec_2;

    cout << "Enter time in HH:MM:SS format" << endl;
    cout << "Hours = ";
    cin >> hrs_1;
    cout << "Minutes = ";
    cin >> min_1;
    cout << "Seconds = ";
    cin >> sec_1;

    cout << endl << "Enter time in HH:MM:SS format" << endl;
    cout << "Hours = ";
    cin >> hrs_2;
    cout << "Minutes = ";
    cin >> min_2;
    cout << "Seconds = ";
    cin >> sec_2;
    
    int totalHours = hrs_1+hrs_2;
    int totalMinutes = min_1+min_2;
    int totalSeconds = sec_1+sec_2;
    
    cout << "Hence sum of both given times in HH:MM:SS format is = "<<totalHours<<":"<<totalMinutes<<":"<<totalSeconds;
    return 0;
}
