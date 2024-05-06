#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double petrolInLiters;
    cout<<"Enter how much petrol is in your \ncar in Liter (l) = ";
    cin>>petrolInLiters;
    
    double distanceACarCanTravel = petrolInLiters*5.3;
    
    cout<<endl<<"A car can travel "<<distanceACarCanTravel<<" Miles (mi) \nwith "<<petrolInLiters<<" Liter (l) petrol.";
    
    return 0;
}