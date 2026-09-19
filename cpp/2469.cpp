class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double cevirilmis_kelvin;
        double cevirilmis_fahrenheit;
        cevirilmis_kelvin = celsius + 273.15;
        cevirilmis_fahrenheit = celsius * 1.80 +32;

        return {cevirilmis_kelvin,cevirilmis_fahrenheit};
    }
};