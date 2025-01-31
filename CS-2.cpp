#include <iostream>
#include <string>
using namespace std;

#define MAX 10

class Library {
    struct Book {
        int id;
        string title;
        bool available;
    } books[MAX];

    int bookCount = 0;

public:
    void addBook() {
        if (bookCount < MAX) {
            cout << "Enter Book ID and Title: ";
            cin >> books[bookCount].id >> books[bookCount].title;
            books[bookCount++].available = true;
            cout << "Book added successfully!\n";
        } else {
            cout << "Library is full!\n";
        }
    }

    void borrowBook() {
        int id;
        cout << "Enter Book ID to borrow: ";
        cin >> id;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id && books[i].available) {
                books[i].available = false;
                cout << "Book borrowed successfully!\n";
                return;
            }
        }
        cout << "Book not available!\n";
    }

    void returnBook() {
        int id;
        cout << "Enter Book ID to return: ";
        cin >> id;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id) {
                books[i].available = true;
                cout << "Book returned successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void showBooks() {
        if (bookCount == 0) {
            cout << "No books in the library.\n";
            return;
        }
        cout << "\nAll Books:\n";
        for (int i = 0; i < bookCount; i++) {
            cout << "ID: " << books[i].id
                 << ", Title: " << books[i].title
                 << ", Available: " << (books[i].available ? "Yes" : "No")
                 << endl;
        }
    }
};

int main() {
    Library lib;
    int choice;

    while (true) {
        cout << "\n1. Add Book\n2. Borrow Book\n3. Return Book\n4. Show All Books\n5. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) lib.addBook();
        else if (choice == 2) lib.borrowBook();
        else if (choice == 3) lib.returnBook();
        else if (choice == 4) lib.showBooks();
        else if (choice == 5) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}
