// Book Catalog File

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp> // JSON library

using json = nlohmann::json;

class BookCatalog {
private:
    std::map<std::string, Book> books;

public:
    //loads the book catalog from the bd.json file
    void loadBooksFromJsonFile(const std::string& filename) {
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

    void searchByTitle(const std::string& title) {
        if (books.find(title) != books.end()) {
            Book& foundBook = books[title];
            foundBook.display();
        } else {
            std::cout << "Book not found by title." << std::endl;
        }
    }
};
