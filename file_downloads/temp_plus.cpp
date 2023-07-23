#include <iostream>
#include <string>           // pre-processor statements
using namespace std;        // namespace

int main(){

    // --------- Int --------- // 
    cout << "###################################" << endl;
    const string introMessage = "Welcome To The Int Temp Viewer";  // const - doesnt change

    int tempKel;
    cout << "Enter Kelvin Temp (int): " << endl; 
    cin >> tempKel;
    
    int tempCel= tempKel-273;
    int tempFah= (tempCel * 9/5) + 32;
    cout << introMessage << endl << endl;
    cout << "Kelvin: " << tempKel << endl;
    cout << "Celsius: " << tempCel << endl;
    cout << "Fahrenheit: " << tempFah << endl;
    cout << "###################################" << endl;

    // --------- Float --------- // 
    const string floatMessage = "Welcome To The Float Temp Viewer";        // const - doesnt change
    float floatKel;
    cout << "Enter Kelvin Temp (float): " << endl; 
    cin >> floatKel;

    float floatCel= floatKel-273.15;
    float floatFah= (floatCel * 9/5) + 32;
    cout << floatMessage << endl << endl;
    cout << "Kelvin: " << floatKel << endl;
    cout << "Celsius: " << floatCel << endl;
    cout << "Fahrenheit: " << floatFah << endl;

}