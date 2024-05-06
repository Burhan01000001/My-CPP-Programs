#include <iostream>
#include <iomanip>

#define pi 3.14

using namespace std;

int main() {
    double radius;
    cout<<"Enter Radius = ";
    cin>>radius;
    
    double volume =4/3*pi*radius*radius*radius;
    
    double surfaceArea =4*pi*radius*radius;
    
    cout<<endl<<"The Volume Of A Sphere Is\n= "<<volume<<endl;
    
    cout<<"The Surface Area Of A Sphere Is = "<<surfaceArea<<endl;
    
    return 0;
}
