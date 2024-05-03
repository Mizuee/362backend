// 362 Semester Project
// File info: Houses Book class and a function to display the book after a search

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp> // JSON library

using json = nlohmann::json;

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

    void display() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
    }
};

void loadBooksFromJsonFile(const std::string& filename, std::map<std::string, Book>& books) {
    std::ifstream file(filename);
    if (file.is_open()) {
        json jsonData;
        file >> jsonData;

        for (const auto& bookData : jsonData["book"]) {
            Book book(bookData["title"], bookData["author"], bookData["isbn"]);
            books[book.getTitle()] = book;
        }

        file.close();
    }
}
