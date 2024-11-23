#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioStreamingService.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioStreamingService.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Advertisement.h>


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