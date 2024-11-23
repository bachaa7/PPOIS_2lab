#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Settings.h>



Settings::Settings(const string& theme, const string& font)
    : theme(theme), font(font) {}

void Settings::setTheme(const string& newTheme) {
    if (newTheme == "Светлая" || newTheme == "Темная") {
        theme = newTheme;
        cout << "Тема изменена на " << theme << ".\n";
    }
    else {
        cout << "Некорректное значение темы. Доступные значения: Светлая, Темная.\n";
    }
}

void Settings::setFont(const string& newFont) {
    font = newFont;
    cout << "Шрифт изменен на " << font << ".\n";
}

string Settings::getTheme() const {
    return theme;
}

string Settings::getFont() const {
    return font;
}

void Settings::displaySettings() const {
    cout << "Текущие настройки:\n";
    cout << "Тема: " << theme << "\n";
    cout << "Шрифт: " << font << "\n";
}
