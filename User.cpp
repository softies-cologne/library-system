#include "User.h"
#include <iostream>

User::User(const std::string& username) : username(username), booksCheckedOut(0) {}

void User::checkOutBook() {
    if (booksCheckedOut < 3) {
        booksCheckedOut++;
        std::cout << "Book checked out to user " << username << ".\n";
    } else {
        std::cout << "User cannot check out more than 3 books.\n";
    }
}

void User::returnBook() {
    if (booksCheckedOut > 0) {
        booksCheckedOut--;
        std::cout << "Book returned by user " << username << ".\n";
    } else {
        std::cout << "No books to return for user " << username << ".\n";
    }
}

void User::displayInfo() const {
    std::cout << "User: " << username << "\nBooks Checked Out: " << booksCheckedOut << "\n";
}
