#include <iostream>
#include <vector>
#include <memory> 
using namespace std;

#include "Class/Book.h"
#include "Utils/Utils.h"

int main() {
    int pilihan;
    vector<unique_ptr<Book>> list_buku;

    cout << "          PERPUSTAKAAN RUUKAZE         " << endl;
    cout << "=======================================" << endl;

    while (true) {
        Utils::displayMenu();
        cin >> pilihan;

        if (pilihan == 1) {
            if (list_buku.size() > 0) {
                for (size_t i = 0; i < list_buku.size(); i++) {
                    cout << "#" << i + 1 << " Book" << endl;
                    list_buku[i]->displayDetails();
                }
            } else {
                cout << "ERROR 404 - BOOK NOT FOUND" << endl;
            }
        } else if (pilihan == 2) {
            string title;
            string author;
            string isbn;
            int year;

            cout << "Masukkan judul buku    : ";
            cin >> title;

            cout << "Masukkan penulis buku  : ";
            cin >> author;

            cout << "Masukkan nomor isbn    : ";
            cin >> isbn;

            cout << "Masukkan tanggal rilis : ";
            cin >> year;

            auto book = unique_ptr<Book>(new Book(title, author, isbn, year));
            list_buku.push_back(move(book));
        } else if (pilihan == 3) {
            cout << "Pilih buku yang ingin dihapus" << endl;
            if (list_buku.size() > 0) {
                for (size_t i = 0; i < list_buku.size(); i++) {
                    cout << i + 1 << ". " << list_buku[i]->getTitle() << endl;
                }
            } else {
                cout << "ERROR 404 - BOOK NOT FOUND" << endl;
            }
        } else if (pilihan == 4) {
            break;
        }
        cout << "=======================================" << endl;
    }

    return 0;
}