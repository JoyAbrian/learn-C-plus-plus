#include <iostream>
using namespace std;

int main() {
    int bilangan;
    bool isPrime = true;

    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    cout << "======================================" << endl;

    if (bilangan < 2)
    {
        isPrime = false;
    } 
    else if (bilangan == 2) 
    {
        isPrime = true;
    } 
    else 
    {
        bool isPrime = true;

        for (int i = 2; i < bilangan; i++)
        {
            if (bilangan % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << "Bilangan prima";
        }
        else
        {
            cout << "Bukan bilangan prima";
        }
    }
}