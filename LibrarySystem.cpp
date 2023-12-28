#include "Book.h"
#include "User.h"
#include <iostream>

int main() {
    // Create books
    Book book1("The C++ Programming Language", "Bjarne Stroustrup", 1985);
    Book book2("Effective Modern C++", "Scott Meyers", 2014);

    // Create users
    User user1("Alice");
    User user2("Bob");

    // Perform library transactions
    book1.checkOut();
    user1.checkOutBook();
    book2.checkOut();
    user2.checkOutBook();
    user1.returnBook();
    user2.returnBook();
    book1.checkIn();
    book2.checkIn();

    // Display book and user information
    std::cout << "\nBook 1 information:\n";
    book1.displayInfo();

    std::cout << "\nBook 2 information:\n";
    book2.displayInfo();

    std::cout << "\nUser 1 information:\n";
    user1.displayInfo();

    std::cout << "\nUser 2 information:\n";
    user2.displayInfo();

    return 0;
}
