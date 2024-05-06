#include<iostream>

using namespace std;

int main(){
    double principalAmount, rateOfInterest, totalTime;
    
    cout << "Enter Principal Amount: ";
    cin >> principalAmount;
    
    cout << "Enter Rate of Interest (in percentage): ";
    cin >> rateOfInterest;
    
    cout << "Enter Total Time (in years): ";
    cin >> totalTime;
    
    // Convert rateOfInterest to a decimal
    double rate = rateOfInterest / 100;

    int compPerYear; // Number of times interest is compounded per year
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> compPerYear;

    // Calculate compound interest
    double amount = principalAmount * pow(1 + (rate / compPerYear), compPerYear * totalTime);

    // Calculate the compound interest
    double compoundInterest = amount - principalAmount;

    cout << "Compound Interest after " << totalTime << " years: " << compoundInterest << endl;
    
    return 0;
}