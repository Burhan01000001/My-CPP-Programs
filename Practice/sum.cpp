#include<iostream>

using namespace std;

int main(){
    int value1,value2,value3,value4,value5;
    
    cout<<"Enter First Digit = ";
    cin>>value1;
    
    cout<<endl<<"Enter Second Digit = ";
    cin>>value2;
    
    cout<<endl<<"Enter Third Digit = ";
    cin>>value3;
    
    cout<<endl<<"Enter Fourth Digit = ";
    cin>>value4;
    
    cout<<endl<<"Enter Fifth Digit = ";
    cin>>value5;
    
    int sum = value1+value2+value3+value4+value5;
    
    cout<<endl<<"Hence the sum of 5 numbers you \nenter is = "<<sum;
    
    return 0;
}
