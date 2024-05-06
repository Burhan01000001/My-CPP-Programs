#include<iostream>

using namespace std;

int main(){
    double radius;
    int angle;
    
    cout<<"Enter radius = ";
    cin>>radius;
    cout<<endl<<"Enter Angle in radians betweem \ntwo radii = ";
    cin>>angle;
    
    double areaOfASector = (1/2)*radius*radius*angle;
    
    cout<<"Hence Area Of Sector of a circle is = "areaOfASector;
    
    return 0;
}