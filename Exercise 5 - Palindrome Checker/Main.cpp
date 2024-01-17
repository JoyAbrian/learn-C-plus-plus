#include <iostream>
using namespace std;

int main() {
    string word;
    string reversedWord = "";

    cout << "Masukkan kata : ";
    getline(cin, word);

    for (size_t i = word.length(); i > 0; i--)
    {
        reversedWord += word[i - 1];
    }

    if (reversedWord == word)
    {
        cout << "Palindrom";
    } 
    else 
    {
        cout << "Bukan palindrom" << endl;
        cout << "Reversed word : " << reversedWord;
    }
}