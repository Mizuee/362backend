// Account.hpp
// Stores a user's account information

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
private:
  std::string accountID;
  std::string accountName;
  std::string accountEmail;
  std::string accountType;
  std::string accountPassword;
  bool isLoggedIn;

public:
  // Constructor
  Account(const std::string& accountID, const std::string& accountName, const std::string& accountEmail, const std::string& accountType, const std::string& accountPassword)
    : accountID(accountID), accountName(accountName), accountEmail(accountEmail), accountType(accountType), accountPassword(accountPassword) {}

  // Getter functions
  std::string getAccountID() const { return accountID; }
  std::string getAccountName() const { return accountName; }
  std::string getAccountEmail() const { return accountEmail; }
  std::string getAccountType() const { return accountType; }
  std::string getAccountPassword() const { return accountPassword; }

  // Setter functions
  void setAccountID(const std::string& accountID) { this->accountID = accountID; }
  void setAccountName(const std::string& accountName) { this->accountName = accountName; }
  void setAccountEmail(const std::string& accountEmail) { this->accountEmail = accountEmail; }
  void setAccountType(const std::string& accountType) { this->accountType = accountType; }
  void setAccountPassword(const std::string& accountPassword) { this->accountPassword = accountPassword; }

  // Account functions
  bool login(const std::string& userID, const std::string& password) {
    if (userID == accountID && password == accountPassword) {
      isLoggedIn = true;
      return true; // Login success
    }
    return false; // Login failed
  }

  void logout() {
    isLoggedIn = false;
  }
  
  bool isLogged() const {
    return isLoggedIn;
  }
};

#endif // ACCOUNT_HPP