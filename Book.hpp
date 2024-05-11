// 362 Semester Project
// File info: Houses Book class and a function to display the book after a search

#include <iostream>
#include <string>
#include <fstream>
#include <map>
//#include <nlohmann/json.hpp> // JSON library

// using json = nlohmann::json;

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;

public:
    Book(std::string title, std::string author, std::string ISBN)
        : title(title), author(author), ISBN(ISBN) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getISBN() const { return ISBN; }

  bool isCheckedOut() const { return checkedOut; } // Check if book is checked out

  void checkout()
  {
    checkedOut = true; // Mark the book as checked out
  }

  void renew()
  {
    // Renewing the book: keeping the status of checkedOut as true
  }

  void returnBook()
  {
    checkedOut = false; // Mark the book as returned
  }
};
