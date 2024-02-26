#include <iostream>
using namespace std;

int main() {
    int decimal;
    string biner = "";

    cout << "Masukkan bilangan desimal : ";
    cin >> decimal;

    if (decimal == 0)
    {
        biner = "0";
    } else {
        while (decimal > 0)
        {
            if (decimal % 2 == 0)
            {
                biner = "0" + biner;
            } else {
                biner = "1" + biner;
            }
            decimal /= 2;
        }
    }

    cout << "Bilangan biner : " + biner;
    return 0;
}