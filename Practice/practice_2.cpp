// Writing A C++ Program To Find Factorial Of A Given Number

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int a, b;
    
    // Taking An Integer Number As Input From User
    cout<<"Enter A Number: ";
    cin>>a;
    
    
    // Checking User Enter A Valid Input Or Not
    if(a<0){
        cout<<"Enter A Valid Number: ";
        cin>>a;
        }
    
    // Loop Will Execute Untill User Enter A Valid Ineger Number
    while(a<0){
        if(a<0){
            cout<<"Enter A Valid Number: ";
            cin>>a;
        }
    }
    
    
    // Finding Factorial Of A Given Number
    for(int x =1;x<a;x++){
        b =a*x;
    }
    cout<<endl;
    
    // Showing Output On The Main Screen
    cout<<"The factorial of your \nnumber is = "<<b;
    
    return 0;
}
