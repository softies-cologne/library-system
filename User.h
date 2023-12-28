#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    int booksCheckedOut;

public:
    User(const std::string& username);

    void checkOutBook();
    void returnBook();
    void displayInfo() const;
};

#endif // USER_H
