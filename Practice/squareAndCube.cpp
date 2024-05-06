#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double value;
    cout<<"Enter a number to find it's \nsquare and cube = ";
    cin>>value;
    
    double square = value*value;
    double cube = value*value*value;
    
    cout<<endl<<"Hence the square of "<<value<<" is = " <<square<<endl;
    cout<<"Hence the cube of "<<value<<" is = " <<cube;
    
    return 0;
}
