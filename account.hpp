// account.hpp
// Creates account for member and provides login and logout functions, as well as search book, return, and renew book functions

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
private:
  std::string accountID;
  std::string accountPassword;
  std::string accountType;

public:
  // Constructor
  Account(const std::string& accountID, const std::string& accountPassword, const std::string& accountType)
    : accountID(accountID), accountPassword(accountPassword), accountType(accountType) {}

  // Getter functions
  std::string getAccountID() const { return accountID; }
  std::string getAccountPassword() const { return accountPassword; }
  std::string getAccountType() const { return accountType; }

  // Setter functions
  void setAccountID(const std::string& accountID) { this->accountID = accountID; }
  void setAccountPassword(const std::string& accountPassword) { this->accountPassword = accountPassword; }
  void setAccountType(const std::string& accountType) { this->accountType = accountType; }

  // Account Functions
  bool login(const std::string& userID, const std::string& password);
  void logout();
  // more if needed
};

#endif // ACCOUNT_HPP