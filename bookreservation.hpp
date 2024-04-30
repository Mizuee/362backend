#include <string>
#include <vector>
#include <iostream> // For debugging purposes

#include "BookItem.hpp"

class BookReservation {
private:
    BookItem book;
    std::string user;
    std::string checkoutDate;
    std::string returnDate;
    int loanPeriod;
    bool overdue;

public:
    // Constructor
    BookReservation(const BookItem& book, const std::string& user, const std::string& checkoutDate)
    : book(book), user(user), checkoutDate(checkoutDate), loanPeriod(14), overdue(false) {
    // Calculate return date based on checkout date and loan period
    returnDate = calculateReturnDate(checkoutDate, loanPeriod);
    }

    // Getters
    const BookItem& getBook() const { return book; }
    const std::string& getUser() const { return user; }
    const std::string& getCheckoutDate() const { return checkoutDate; }
    const std::string& getReturnDate() const { return returnDate; }
    int getLoanPeriod() const { return loanPeriod; }
    bool isOverdue() const { return overdue; }

    // Setters
    void setUser(const std::string& user) { this->user = user; }
    void setCheckoutDate(const std::string& checkoutDate) { this->checkoutDate = checkoutDate; }
    void setLoanPeriod(int loanPeriod) { this->loanPeriod = loanPeriod; }

    // Other functions
    void markAsOverdue() { overdue = true; }

private:
    std::string calculateReturnDate(const std::string& checkoutDate, int loanPeriod) const {
        // Placeholder logic for calculating return date
        // For simplicity, assuming return date is loan period days after checkout
        // You may need a more sophisticated approach in a real application
        return checkoutDate + std::to_string(loanPeriod); // Assuming "+" concatenates strings
    }
};
