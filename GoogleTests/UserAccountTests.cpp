#include "pch.h"
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/UserAccount.h>

TEST(UserAccountTest, ConstructorAndAccessors) {
    UserAccount user("test_user", "test_user@example.com", "secure_password");

    EXPECT_EQ(user.getUsername(), "test_user");
    EXPECT_EQ(user.getEmail(), "test_user@example.com");
}

TEST(UserAccountTest, Authentication) {
    UserAccount user("test_user", "test_user@example.com", "secure_password");

    EXPECT_TRUE(user.authenticate("secure_password"));

    EXPECT_FALSE(user.authenticate("wrong_password"));
}

TEST(UserAccountTest, ChangePassword) {
    UserAccount user("test_user", "test_user@example.com", "secure_password");

    testing::internal::CaptureStdout();
    user.changePassword("secure_password", "new_password");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(user.authenticate("new_password"));
    EXPECT_FALSE(user.authenticate("secure_password"));
    EXPECT_EQ(output, "Пароль успешно изменен.\n");

    testing::internal::CaptureStdout();
    user.changePassword("wrong_password", "another_password");
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Старый пароль введен неверно. Изменение пароля невозможно.\n");
    EXPECT_FALSE(user.authenticate("another_password"));
}

TEST(UserAccountTest, DisplayAccountInfo) {
    UserAccount user("test_user", "test_user@example.com", "secure_password");

    testing::internal::CaptureStdout();
    user.displayAccountInfo();
    std::string output = testing::internal::GetCapturedStdout();

    std::string expectedOutput = "Имя пользователя: test_user\nЭлектронная почта: test_user@example.com\n";
    EXPECT_EQ(output, expectedOutput);
}
