// 362 Semester Project
// File purpose: Class for a Bookitem that will be used throughout the project

#include <iostream>
#include <string>

class Book {
private:
  std::string title;
  std::string author;
  int ISBN;

public:
  // Constructor
  Book(std::string title, std::string author, int ISBN)
      : title(title), author(author), ISBN(ISBN) {}

  // Getters
  std::string getTitle() { return title; } 
  std::string getAuthor() { return author; }
  int getISBN() { return ISBN; }
};

  // Other functions as needed
};
