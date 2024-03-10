#include <iostream>

using namespace std;

int main() {
    char scale;
    double temperature;
    double convertedTemperature;

    // Ask user to enter a temperature
    cout << "Please enter a temperature: ";
    cin >> temperature;

    // Ask user to specify the scale of the temperature
    cout << "Is it in Celsius (C) or Fahrenheit (F)? ";
    cin >> scale;

    // Convert temperature based on the specified scale
    if (scale == 'C' || scale == 'c') {
        convertedTemperature = (temperature * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << convertedTemperature << endl;
    } else if (scale == 'F' || scale == 'f') {
        convertedTemperature = (temperature - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << convertedTemperature << endl;
    } else {
        cout << "Only 'C' or 'F' are accepted as scale inputs." << endl;
    }

    return 0;
}

