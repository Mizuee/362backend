// employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    void register_account(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password);
    void logout();
    void search_book(const std::string& title, const std::string& author, const std::string& isbn);
    void search_member(const std::string& memberID);
    void send_email(const std::string& memberID, const std::string& subject, const std::string& message);
    void manage_book(const std::string& title, const std::string& author, const std::string& isbn);
    void manage_member(const std::string& memberID);
private:
    std::string employeeID;
    std::string employeePassword;
};

#endif // EMPLOYEE_H
