#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>
 
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
        cout << "������ ������� �������.\n";
    }
    else {
        cout << "������ ������ ������ �������. ��������� ������ ����������.\n";
    }
}

void UserAccount::displayAccountInfo() const {
    cout << "��� ������������: " << username << "\n";
    cout << "����������� �����: " << email << "\n";
}
