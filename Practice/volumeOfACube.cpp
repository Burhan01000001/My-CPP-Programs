#include<iostream>

using namespace std;

int main(){
    double width,height,length;
    cout<<"Enter Length = ";
    cin>>length;
    cout<<"Enter Width = ";
    cin>>width;
    cout<<"Enter Height = ";
    cin>>height;
    
    double volume = length*width*height;
    
    cout<<endl<<"Hence Volume of a cube according \nto given measures is = "<<volume;
    
    return 0;
}
