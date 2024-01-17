#include <iostream>
using namespace std;

float convertCelcius(char satuan, double temperatur) {
    if (satuan == 'R' || satuan == 'r') {
        float result = (4.0/5.0) * temperatur;
        return result;
    } else if (satuan == 'F' || satuan == 'f') {
        float result = (9.0/5.0) * temperatur + 32.0;
        return result;
    } else if (satuan == 'K' || satuan == 'k') {
        float result = temperatur + 273.0;
        return result;
    }
}

float convertReamur(char satuan, double temperatur) {
    if (satuan == 'C' || satuan == 'c') {
        float result = (5.0/4.0) * temperatur;
        return result;
    } else if (satuan == 'F' || satuan == 'f') {
        float result = (9.0/4.0) * temperatur + 32.0;
        return result;
    } else if (satuan == 'K' || satuan == 'k') {
        float result = (5.0/4.0) * temperatur + 273.0;
        return result;
    }
}

float convertFahrenheit(char satuan, double temperatur) {
    if (satuan == 'C' || satuan == 'c') {
        float result = (5.0/9.0) * (temperatur - 32.0);
        return result;
    } else if (satuan == 'R' || satuan == 'r') {
        float result = (4.0/9.0) * (temperatur - 32.0);
        return result;
    } else if (satuan == 'K' || satuan == 'k') {
        float result = (5.0/9.0) * (temperatur - 32.0) + 273.0;
        return result;
    }
}

float convertKelvin(char satuan, double temperatur) {
    if (satuan == 'C' || satuan == 'c') {
        float result = temperatur - 273.0;
        return result;
    } else if (satuan == 'R' || satuan == 'r') {
        float result = (4.0/5.0) * (temperatur - 273.0);
        return result;
    } else if (satuan == 'F' || satuan == 'f') {
        float result = (9.0/5.0) * (temperatur - 273.0) + 32.0;
        return result;
    }
}

void converter(char satuan, double temperatur) {
    switch (satuan)
    {
    case 'C':
    case 'c':
        cout << "Suhu Reamur : " << + convertReamur('c', temperatur) << endl;
        cout << "Suhu Fahrenheit : " << convertFahrenheit('c', temperatur) << endl;
        cout << "Suhu Kelvin : " << convertKelvin('c', temperatur);
        break;
    case 'R':
    case 'r':
        cout << "Suhu Celcius : " << + convertCelcius('r', temperatur) << endl;
        cout << "Suhu Fahrenheit : " << convertFahrenheit('r', temperatur) << endl;
        cout << "Suhu Kelvin : " << convertKelvin('r', temperatur);
        break;
    case 'F':
    case 'f':
        cout << "Suhu Celcius : " << + convertCelcius('f', temperatur) << endl;
        cout << "Suhu Reamur : " << convertReamur('f', temperatur) << endl;
        cout << "Suhu Kelvin : " << convertKelvin('f', temperatur);
        break;
    case 'K':
    case 'k':
        cout << "Suhu Celcius : " << + convertCelcius('k', temperatur) << endl;
        cout << "Suhu Reamur : " << convertReamur('k', temperatur) << endl;
        cout << "Suhu Fahrenheit : " << convertFahrenheit('k', temperatur);
        break;
    default:
        cout << "Satuan suhu tidak ditemukan";
    }
}

int main() {
    char satuan;
    double temperatur;


    cout << "KONVERSI SUHU \n";

    cout << "Masukkan satuan suhu (C/F/R/K) : ";
    cin >> satuan;

    cout << "Masukkan suhu : ";
    cin >> temperatur;

    cout << "=========================================================================" << endl;
    converter(satuan, temperatur);

    return 0;
}