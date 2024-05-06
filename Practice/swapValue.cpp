// This Program Is Two Swap Two Numbers

#include<iostream>

using namespace std;

int main(){
    int value1 = 10;
    int value2 = 20;
    int value3 = 30;
    // char letter1[3] = "ali";
        
    cout<<"Before: \n"<<endl;
    cout<<"Value 1 = "<<value1<<endl;
    cout<<"Value 2 = "<<value2<<endl;
    cout<<"Value 3 = "<<value3<<endl;
    // cout<<"letter1 = "<<letter1<<endl;
    
    int tmp = value1;
    value1 = value2;
    value2 = value3;
    value3 = tmp;
    
    cout<<endl<<"After: \n"<<endl;
    cout<<"Value 1 = "<<value1<<endl;
    cout<<"Value 2 = "<<value2<<endl;
    cout<<"Value 3 = "<<value3<<endl;
    
    return 0;
}
