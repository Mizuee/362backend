// 362 Semester Project
// File purpose: Class for a Bookitem that will be used throughout the project


#include <string>
#include <vector>
#include <iostream> // For debugging purposes

class BookItem
{
private:
  std::string title;
  std::string author;
  std::string isbn;
  int availability;

public:
  // Constructor
  BookItem(const std::string &title, const std::string &author, const std::string &isbn, int availability)
      : title(title), author(author), isbn(isbn), availability(availability) {}

  // Getters
  std::string getTitle() const { return title; }
  std::string getAuthor() const { return author; }
  std::string getISBN() const { return isbn; }
  int getAvailability() const { return availability; }

  // Setters
  void setTitle(const std::string &title) { this->title = title; }
  void setAuthor(const std::string &author) { this->author = author; }
  void setISBN(const std::string &isbn) { this->isbn = isbn; }
  void setAvailability(int availability) { this->availability = availability; }

  // Other functions as needed
};
