#ifndef SETTINGS_H
#define SETTINGS_H

#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>




class Settings {
private:
    string theme;     
    string font;      

public:
    Settings(const string& theme = "Light", const string& font = "Arial");

    void setTheme(const string& newTheme);
    void setFont(const string& newFont);

    string getTheme() const;
    string getFont() const;

    void displaySettings() const;
};

#endif

