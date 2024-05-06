#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temperatureInFahrenheit;
    
    cout<<"Enter temperature in \nFahrenheit = ";
    cin>>temperatureInFahrenheit;
    
    double temperatureInCelsius = 5.0/9.0*(temperatureInFahrenheit-32);
    
    cout<<endl<<"Fahrenheit: "<<temperatureInFahrenheit<<"F"<<endl;
    cout<<"Celsius: "<<temperatureInCelsius<<"°C";
    
    return 0;
}
