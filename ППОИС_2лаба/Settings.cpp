#include </�����/�����/����/�����_2����/�����_2����/Settings.h>



Settings::Settings(const string& theme, const string& font)
    : theme(theme), font(font) {}

void Settings::setTheme(const string& newTheme) {
    if (newTheme == "�������" || newTheme == "������") {
        theme = newTheme;
        cout << "���� �������� �� " << theme << ".\n";
    }
    else {
        cout << "������������ �������� ����. ��������� ��������: �������, ������.\n";
    }
}

void Settings::setFont(const string& newFont) {
    font = newFont;
    cout << "����� ������� �� " << font << ".\n";
}

string Settings::getTheme() const {
    return theme;
}

string Settings::getFont() const {
    return font;
}

void Settings::displaySettings() const {
    cout << "������� ���������:\n";
    cout << "����: " << theme << "\n";
    cout << "�����: " << font << "\n";
}
