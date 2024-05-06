#include <iostream>
#include <iomanip>

#define oneKilometer 1.609

using namespace std;

int main() {
    int miles;
    cout<<"Enter Miles = ";
    cin>>miles;
    
    double kilometers = miles * oneKilometer;
    
    cout<<endl<<"Hence "<<miles<<" Miles (m) are equal to\n"<<kilometers<<" Kilometers (km)";
    
    return 0;
}
