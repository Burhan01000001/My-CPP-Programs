#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double x1,x2;
    cout<<"Enter value of x1 and x2"<<endl;
    cout<<endl<<"x1 = ";
    cin>>x1;
    cout<<"x2 = ";
    cin>>x2;
    
    double y1,y2;
    cout<<endl<<"Enter value of y1 and y2"<<endl;
    cout<<endl<<"y1 = ";
    cin>>y1;
    cout<<"y2 = ";
    cin>>y2;
    
    double x = x2-x1;
    double y = y2-y1;
    
    double distance = sqrt((x*x)+(y*y));
    
    cout<<endl<<"Hence distance between two \npoints (x,y) is = "<<distance;
    
    return 0;
}
