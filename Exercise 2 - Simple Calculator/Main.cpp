#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Masukkan operasi (+, -, *, /) : ";
    cin >> operation;

    cout << "Masukkan bilangan pertama : ";
    cin >> num1;

    cout << "Masukkan bilangan kedua : ";
    cin >> num2;

    switch (operation)
    {
    case '+' :
        cout << "Hasil penjumlahan : " << num1 + num2;
        break;
    case '-' :
        cout << "Hasil pengurangan : " << num1 - num2;
        break;
    case '*' :
        cout << "Hasil perkalian : " << num1 * num2;
        break;
    case '/' :
        cout << "Hasil pembagian : " << num1 / num2;
        break;
    default:
        cout << "ERROR 404";
        break;
    }
}