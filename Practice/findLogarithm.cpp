#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double number;
    cout<<"Enter a number to find \nLogarithm = ";
    cin>>number;
    
    double logarithm = log10(number) / log10(2);
    
    cout<<endl<<"Hence logarithm of "<<number<<" = "<<logarithm;
    
    return 0;
}