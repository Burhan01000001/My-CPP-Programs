#include<iostream>

using namespace std;

int main(){
    double radiusOfArc;
    int angleMadeByArc;
    
    cout<<"Enter radius of Arc = ";
    cin>>radiusOfArc;
    cout<<"Enter Angle made by Arc = ";
    cin>>angleMadeByArc;
    
    double lengthOfConvexLens = radiusOfArc * angleMadeByArc;
    
    cout<<endl<<"Hence Length Of a convex lens \naccording to give radius and \nangle = "<<lengthOfConvexLens;
    
    return 0;
}