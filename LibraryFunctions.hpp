#include <string>
#include <map>
#include "book.hpp" // Include the Book class header

class Library {
private:
    std::map<std::string, Book>& books;

public:
    Library(std::map<std::string, Book>& bookCatalog) : books(bookCatalog) {}

    // Checkout a book by title or ISBN
    bool checkoutBook(const std::string& identifier) {
        for (auto& pair : books) {
            if (pair.first == identifier || pair.second.getISBN() == identifier) {
                if (!pair.second.isCheckedOut()) {
                    pair.second.checkout();
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }

    // Renew a book by title or ISBN
    bool renewBook(const std::string& identifier) {
        for (auto& pair : books) {
            if (pair.first == identifier || pair.second.getISBN() == identifier) {
                if (pair.second.isCheckedOut()) {
                    pair.second.renew();
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }

    // Return a book by title or ISBN
    bool returnBook(const std::string& identifier) {
        for (auto& pair : books) {
            if (pair.first == identifier || pair.second.getISBN() == identifier) {
                if (pair.second.isCheckedOut()) {
                    pair.second.returnBook();
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }
};
