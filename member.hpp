// member.hpp

#ifndef MEMBER_HPP
#define MEMBER_HPP

#include <string>

#include "Book.hpp"

class Member {
private:
  std::string memberID;
  std::string memberPassword;

public:
  // Constructor
  Member(const std::string& memberID, const std::string& memberPassword)
    : (memberID, memberPassword) {}

  // Getter Functions
  std::string getMemberID() const;
  std::string getMemberPassword() const; 
  
  // Member Functions
  void show_book_borrowed(const std::string& memberID);
  void show_notification(const std::string& memberID);
};

#endif // MEMBER_HPP
