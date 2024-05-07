// employee.hpp

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

#include "Book.hpp"
#include "member.hpp"

class Employee {
private:
  std::string employeeID;
  std::string employeeName;

public:
  // Constructor
  Employee(const std::string& employeeID, const std::string& employeeName)
    : employeeID(employeeID), employeeName(employeeName) {}

  // Getter Functions
  std::string getEmployeeID() const;
  std::string getEmployeeName() const;

  // Employee Functions
  void search_book(const BookItem& book);
  void search_member(const Member& member);
  void send_email(const Member& member, const std::string& subject, const std::string& message);

};

#endif // EMPLOYEE_HPP
