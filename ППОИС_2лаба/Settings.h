#ifndef SETTINGS_H
#define SETTINGS_H

#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>




class Settings {
private:
    string theme;     
    string font;      

public:
    Settings(const string& theme = "�������", const string& font = "Arial");

    void setTheme(const string& newTheme);
    void setFont(const string& newFont);

    string getTheme() const;
    string getFont() const;

    void displaySettings() const;
};

#endif

