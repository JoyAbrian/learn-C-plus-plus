#include <iostream>
using namespace std;

int main() {
    int bilangan;
    int hasil = 1;

    cout << "Masukkan bilangan : ";
    cin >> bilangan;

    while (bilangan > 1) 
    {
        hasil *= bilangan;
        bilangan--;
    }
    
    cout << "Hasil faktorial : " << hasil;
}