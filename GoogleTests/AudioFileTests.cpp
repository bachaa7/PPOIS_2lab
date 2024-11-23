#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>


TEST(AudioFileTest, ConstructorTest) {
    AudioFile file("Test Audio", 300, "mp3");
    EXPECT_EQ(file.getTitle(), "Test Audio");
    EXPECT_EQ(file.getTimeInSeconds(), 300);
    EXPECT_EQ(file.getFormat(), "mp3");
}

TEST(AudioFileTest, GetFormatTest) {
    AudioFile file("Sample Audio", 200, "wav");
    EXPECT_EQ(file.getFormat(), "wav");
}

TEST(AudioFileTest, PlayTest) {
    AudioFile file("Test Audio", 300, "mp3");

    testing::internal::CaptureStdout();
    file.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Audio Play: Test Audio [mp3 ]\n"), std::string::npos);
}

