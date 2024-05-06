#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int age;
    cout<<"Enter Your Age = ";
    cin>>age;
    
    int ageInMnths = age * 12;
    int ageInDays = age * 365;
    
    cout<<endl<<"Your age in Months is = "<<ageInMnths<<endl;
    
    cout<<"Your age in Days is = "<<ageInDays<<endl;
    
    return 0;
}
