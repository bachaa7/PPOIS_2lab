#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/UserAccount.h>
 
UserAccount::UserAccount(const string& username, const string& email, const string& password)
    : username(username), email(email), password(password) {}

string UserAccount::getUsername() const {
    return username;
}

string UserAccount::getEmail() const {
    return email;
}

bool UserAccount::authenticate(const string& inputPassword) const {
    return password == inputPassword;
}

void UserAccount::changePassword(const string& oldPassword, const string& newPassword) {
    if (oldPassword == password) {
        password = newPassword;
        cout << "Пароль успешно изменен.\n";
    }
    else {
        cout << "Старый пароль введен неверно. Изменение пароля невозможно.\n";
    }
}

void UserAccount::displayAccountInfo() const {
    cout << "Имя пользователя: " << username << "\n";
    cout << "Электронная почта: " << email << "\n";
}
