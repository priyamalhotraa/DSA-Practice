```cpp
// Problem: Temperature Converter
// Topic: Math, Conditional Statements

/*
APPROACH: CH
Convert the temperature based on the given conversion type.

If conversionType is "CtoF":
    Convert Celsius to Fahrenheit using (1.8 * temp) + 32.

If conversionType is "FtoC":
    Convert Fahrenheit to Celsius using (temp - 32) * 5 / 9.

Return the converted temperature 
*/

class TemperatureConverter {
public:
    double convertTemperature(double temp, string conversionType) {
        if(conversionType == "CtoF") {
            return (1.8 * temp) + 32;
        }

        if(conversionType == "FtoC") {
            return (temp - 32) * 5 / 9;
        }
    }
};
```
