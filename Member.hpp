// Member.hpp

#ifndef MEMBER_HPP
#define MEMBER_HPP

#include <string>

#include "BookCatalog.hpp"

class Member {
private:
  std::string memberID;
  std::string memberName;
  std::string memberEmail;

public:
  // Constructor
  Member(const std::string& memberID, const std::string& memberName, const std::string& memberEmail)
    : memberID(memberID), memberName(memberName), memberEmail(memberEmail) {}

  // Getter Functions
  std::string getMemberID() const { return memberID; }
  std::string getMemberName() const { return memberName; }
  std::string getMemberEmail() const { return memberEmail; } 
  
  // Member Functions
  void showBorrowedBooks(const std::string& memberID);
  void showNotification(const std::string& memberID);
};

#endif // MEMBER_HPP