#include<iostream>

using namespace std;

int main(){
    double weightInPounds;
    cout<<"Enter Weight in Pounds = ";
    cin>>weightInPounds;
    
    double weightInKilograms = weightInPounds*0.45359237;
    
    cout<<endl<<"Weight in Pounds = "<<weightInPounds;
    cout<<endl<<"Weight in Kilograms = "<<weightInKilograms;
    
    return 0;
}