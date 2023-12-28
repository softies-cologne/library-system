#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;
    bool available;

public:
    Book(const std::string& title, const std::string& author, int publicationYear);

    void checkOut();
    void checkIn();
    void displayInfo() const;
    bool isAvailable() const;
};

#endif // BOOK_H
