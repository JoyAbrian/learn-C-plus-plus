#include <iostream>
#include <vector>
using namespace std;

int main() {
    int panjangArray;
    vector<int> list_angka;
    int bilangan;

    cout << "Masukkan panjang array : ";
    cin >> panjangArray;
    for (size_t i = 0; i < panjangArray; i++)
    {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> bilangan;
        list_angka.push_back(bilangan);
    }
    cout << "=========================================" << endl;

    for (size_t i = 0; i < panjangArray; i++)
    {
        cout << list_angka[i] << " ";
    }

    cout << "\n1. Jumlah semua bilangan" << endl;
    cout << "2. Nilai Maksimum dan Minimum" << endl;
    cout << "3. Balik elemen" << endl;
    cout << "Masukkan pilihan : ";

    int pilihan;
    cin >> pilihan;

    cout << "=========================================" << endl;

    if (pilihan == 1) {
        int sum = 0;

        for (size_t i = 0; i < panjangArray; i++) {
            sum += list_angka[i];
        }
        cout << "Hasil jumlah semua elemen array adalah : " << sum;
    } else if (pilihan == 2) {
        int max = list_angka[0];
        int min = list_angka[0];

        for (int i = 1; i < panjangArray; i++) {
            if (list_angka[i] > max) {
                max = list_angka[i];
            }
            if (list_angka[i] < min) {
                min = list_angka[i];
            }
        }
        cout << "Nilai maksimum : " << max << endl;
        cout << "Nilai minimum : " << min << endl;
    } else if (pilihan == 3) {
        for (int start = 0, end = panjangArray - 1; start < end; start++, end--) {
            int temp = list_angka[start];
            list_angka[start] = list_angka[end];
            list_angka[end] = temp;
        }
        for (size_t i = 0; i < panjangArray; i++) {
            cout << list_angka[i] << " ";
        }
    } else {
        cout << "Pilihan tidak ada";
    }
}