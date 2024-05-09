// Employee.hpp

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

#include "Member.hpp"
#include "BookCatalog.hpp"
#include "AccountCatalog.hpp"

class Employee {
private:
  std::string employeeID;
  std::string employeeName;
  std::string employeeEmail;

public:
  // Constructor
  Employee(const std::string& employeeID, const std::string& employeeName, const std::string& employeeEmail, BookCatalog& bookCatalog, AccountCatalog& accountCatalog)
    : employeeID(employeeID), employeeName(employeeName), employeeEmail(employeeEmail), bookCatalog(bookCatalog), accountCatalog(accountCatalog) {}

  // Getter Functions
  std::string getEmployeeID() const { return employeeID; }
  std::string getEmployeeName() const { return employeeName; }
  std::string getEmployeeEmail() const { return employeeEmail; }

  // Search for book by title
  void searchBook(const std::string& title) {
    bookCatalog.searchByTitle(title);
  }

  void searchMember(const std::string& username) {
    accountCatalog.searchByUsername(username);
  }

  void sendEmail(const Member& member, const std::string& subject, const std::string& message) {
    // Implementation
    std::cout << "Email sent to " << member.getMemberID() << std::endl;
  }

};

#endif // EMPLOYEE_HPP