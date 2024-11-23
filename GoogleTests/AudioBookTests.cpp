#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioBook.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioBook.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioContent.h>

#include <sstream>


TEST(AudioBookTest, ConstructorAndGetAuthor) {
    AudioBook audioBook("Test Audiobook", 300, "mp3", "John Doe", "Jane Smith");

    EXPECT_EQ(audioBook.getAuthor(), "John Doe");
}

TEST(AudioBookTest, ConstructorAndGetNarrator) {
    AudioBook audioBook("Test Audiobook", 300, "mp3", "John Doe", "Jane Smith");

    EXPECT_EQ(audioBook.getNarrator(), "Jane Smith");
}

TEST(AudioBookTest, PlayMethod) {
    AudioBook audioBook("Test Audiobook", 300, "mp3", "John Doe", "Jane Smith");

    testing::internal::CaptureStdout();
    audioBook.play();  
    std::string result = testing::internal::GetCapturedStdout();  

    EXPECT_NE(result.find("Playing audiobook: Test Audiobook by John Doe, narrated by Jane Smith"), std::string::npos);
}