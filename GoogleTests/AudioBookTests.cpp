#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/AudioBook.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioBook.cpp>
#include </�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioContent.h>

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