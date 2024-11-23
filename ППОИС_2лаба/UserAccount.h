#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Lybryris.h>

#ifndef USERACCOUNT_H
#define USERACCOUNT_H


class UserAccount {
private:
    string username;
    string email;
    string password;

public:
    UserAccount(const string& username, const string& email, const string& password);
    UserAccount(const std::string& username, const std::string& password)
        : username(username), password(password) {}



    string getUsername() const;
    string getEmail() const;

    bool authenticate(const string& inputPassword) const;
    void changePassword(const string& oldPassword, const string& newPassword);

    void displayAccountInfo() const;
};

#endif


