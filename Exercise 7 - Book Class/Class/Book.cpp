#include "book.h"
#include <iostream>
using namespace std;

Book::Book(string title, string author, string isbn, int year) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->year = year;
}

void Book::setTitle(string title) {
    this->title = title;
}

string Book::getTitle() const {
    return this->title;
}

void Book::setAuthor(string author) {
    this->author = author;
}

string Book::getAuthor() const {
    return this->author;
}

void Book::setIsbn(string isbn) {
    this->isbn = isbn;
}

string Book::getIsbn() const {
    return this->isbn;
}

void Book::setYear(int year) {
    this->year = year;
}

int Book::getYear() const {
    return this->year;
}

void Book::displayDetails() const {
    cout << "Judul Buku  : " << getTitle() << endl;
    cout << "Penulis     : " << getAuthor() << endl;
    cout << "ISBN        : " << getIsbn() << endl;
    cout << "Tahun Rilis : " << getYear() << endl;
}