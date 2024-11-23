#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/Settings.h>
#include </�����/�����/����/�����_2����/�����_2����/Settings.cpp>

TEST(SettingsTest, DefaultConstructorTest) {
    Settings settings;
    EXPECT_EQ(settings.getTheme(), "Light");
    EXPECT_EQ(settings.getFont(), "Arial");
}

TEST(SettingsTest, CustomConstructorTest) {
    Settings settings("Dark", "Times New Roman");
    EXPECT_EQ(settings.getTheme(), "Dark");
    EXPECT_EQ(settings.getFont(), "Times New Roman");
}

TEST(SettingsTest, SetThemeTest) {
    Settings settings;

    settings.setTheme("Dark");
    EXPECT_EQ(settings.getTheme(), "Dark");

    testing::internal::CaptureStdout();
    settings.setTheme("Blue");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(settings.getTheme(), "Dark"); 
    EXPECT_TRUE(output.find("������������ �������� ����") != std::string::npos);
}

TEST(SettingsTest, SetFontTest) {
    Settings settings;

    settings.setFont("Verdana");
    EXPECT_EQ(settings.getFont(), "Verdana");
}

TEST(SettingsTest, DisplaySettingsTest) {
    Settings settings("Dark", "Courier New");

    testing::internal::CaptureStdout();
    settings.displaySettings();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("������� ���������:") != std::string::npos);
    EXPECT_TRUE(output.find("����: Dark") != std::string::npos);
    EXPECT_TRUE(output.find("�����: Courier New") != std::string::npos);
}
