// book catalog file

#include <string>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp> // JSON library
#include "book.hpp" // Include the Book class header

using json = nlohmann::json;

class BookCatalog {
private:
    std::map<std::string, Book> books;

public:
    // Loads the book catalog from the bd.json file
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
};
