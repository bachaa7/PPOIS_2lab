#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/AudioStreamingService.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioStreamingService.cpp>
#include </�����/�����/����/�����_2����/�����_2����/UserAccount.cpp>
#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>
#include </�����/�����/����/�����_2����/�����_2����/Advertisement.h>


TEST(AudioStreamingServiceTest, ConstructorTest) {
    AudioStreamingService service("MusicStream");
    EXPECT_NO_THROW({
        AudioStreamingService service("MusicStream");
        });
}

TEST(AudioStreamingServiceTest, RegisterUserTest) {
    AudioStreamingService service("MusicStream");
    UserAccount user1("User1", "Password1");
    UserAccount user2("User2", "Password2");

    service.registerUser(&user1);
    service.registerUser(&user2);

    testing::internal::CaptureStdout();
    service.listUsers();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("User1"), std::string::npos);
    EXPECT_NE(output.find("User2"), std::string::npos);
}



TEST(AudioStreamingServiceTest, ListUsersEmptyTest) {
    AudioStreamingService service("MusicStream");

    testing::internal::CaptureStdout();
    service.listUsers();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Users registered in MusicStream:"), std::string::npos);
}






TEST(AudioStreamingServiceTest, PlayAdNoAds) {
    AudioStreamingService service("Test Service");

    UserAccount* user = new UserAccount("user1", "user1@example.com", "password");
    service.registerUser(user);

    testing::internal::CaptureStdout();
    service.playAd(); 
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "No ads available.\n");
}