// member_catalog.h

#ifndef MEMBER_CATALOG_H
#define MEMBER_CATALOG_H

class Member_Catalog {
public:
    void updateCatalog(const std::string& title, const std::string& author, const std::string& ISBN);
private:
    std::string memberID;
    std::map<string, list> memberBooks;
};

#endif // MEMBER_CATALOG_H