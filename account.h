// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    void register_account(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password);
    void logout();
    void view_booklist();
    void search_book(const std::string& title, const std::string& author, const std::string& isbn);
    void checkout(const std::string& title, const std::string& author, const std::string& isbn);
    void return_book(const std::string& title, const std::string& author, const std::string& isbn);
    void renew_book(const std::string& title, const std::string& author, const std::string& isbn);
private:
    int noOfBorrowBooks;
    int noOfReservedBooks;
    int noOfReturnedBooks;
};

#endif // ACCOUNT_H
