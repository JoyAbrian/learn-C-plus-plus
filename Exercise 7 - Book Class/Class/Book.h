#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    int year;

public:
    Book(string title, string author, string isbn, int year);

    void setTitle(string title);
    string getTitle() const;

    void setAuthor(string author);
    string getAuthor() const;

    void setIsbn(string isbn);
    string getIsbn() const;

    void setYear(int year);
    int getYear() const;

    void displayDetails() const;
};

#endif