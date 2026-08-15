#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int BookID;
    string BookTitle;
    string Author;
    float Price;

    void accept() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Title: ";
        cin >> BookTitle;
        cout << "Enter Author: ";
        cin >> Author;
        cout << "Enter Price: ";
        cin >> Price;
    }

    void display() {
        cout << "Book ID: " << BookID << endl;
        cout << "Book Title: " << BookTitle << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: " << Price << endl;
    }
};

int main() {
    Book *book = new Book;
    book->accept();
    cout<<endl;
    cout << "\nBook Details:" << endl;
    book->display();

    delete book;
    book = nullptr;
    return 0;
}
