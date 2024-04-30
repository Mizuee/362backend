// member.h

#ifndef MEMBER_H
#define MEMBER_H

class Member {
public:
  void show_book_borrowed(const std::string& memberID);
  void show_notification(const std::string& memberID);
private:
  std::string memberID;
  std::string memberPassword;
};

#endif // MEMBER_H