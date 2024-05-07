// AccountCatalog.hpp
// Accesses user information from database

#ifndef ACCOUNT_CATALOG_HPP
#define ACCOUNT_CATALOG_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp> // JSON library

#include "Account.hpp"

using json = nlohmann::json;

class AccountCatalog {
private:
  std::map<std::string, Account> accounts;

public:
  void loadAccountsFromJsonFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
      json jsonData;
      file >> jsonData;

      for (const auto& accountData : jsonData["user"]) {
      Account account(accountData["id"], accountData["name"], accountData["email"], accountData["role"]);
      accounts[account.getAccountID()] = account;
      }
      file.close();
    }

  }
  void searchByUsername(const std::string& username) {
    for (const auto& pair : accounts) {
      const Account& account = pair.second;
      if (account.getAccountName() == username) {
        std::cout << "User found: " << username << std::endl;
        std::cout << "User ID: " << accounts.getAccountID() << std::endl;
        std::cout << "User email: " << accounts.getAccountEmail() << std::endl;
        std::cout << "User role: " << accounts.getAccountType() << std::endl;
        return;
      }
    }
    std::cout << "User not found: " << username << std::endl;
  }
};

#endif // ACCOUNT_CATALOG_HPP