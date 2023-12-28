#include "Book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, int publicationYear)
    : title(title), author(author), publicationYear(publicationYear), available(true) {}

void Book::checkOut() {
    if (available) {
        available = false;
        std::cout << "Book checked out successfully.\n";
    } else {
        std::cout << "Book is not available for checkout.\n";
    }
}

void Book::checkIn() {
    available = true;
    std::cout << "Book checked in successfully.\n";
}

void Book::displayInfo() const {
    std::cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << publicationYear << "\n";
}

bool Book::isAvailable() const {
    return available;
}
