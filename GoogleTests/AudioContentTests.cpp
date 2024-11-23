#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioBook.h>

TEST(AudioContentTest, GettersTest) {
    AudioBook book("Test Title", 500, "mp3", "Author Name", "Narrator Name");

    EXPECT_EQ(book.getTitle(), "Test Title");
    EXPECT_EQ(book.getTimeInSeconds(), 500);
}

TEST(AudioContentTest, PolymorphicPlayTest) {
    AudioContent* content = new AudioBook("Test Title", 500, "mp3", "Author Name", "Narrator Name");

    testing::internal::CaptureStdout();
    content->play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Playing audiobook: Test Title by Author Name, narrated by Narrator Name"), std::string::npos);

    delete content;
}
