#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a,b,c;
    cout<<"Enter value of \" A \" side of a \nTriangle = ";
    cin>>a;
    cout<<endl<<"Enter value of \" B \" side of a \nTriangle = ";
    cin>>b;
    cout<<endl<<"Enter value of \" C \" side of a \nTriangle = ";
    cin>>c;
    
    double s = (a+b+c)/2;
    
    long double areaOfTriangle = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<endl<<"Hence the Area Of Triangle by \ngiven three side A, B and C \nis = "<<areaOfTriangle;
    
    return 0;
}
