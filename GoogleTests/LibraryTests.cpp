#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Library.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Library.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/MusicTrack.h>    
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/MusicTrack.cpp>                                                                                          
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Podcast.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Podcast.cpp>


TEST(LibraryTest, AddMediaTest) {
    Library library;
    AudioFile audioFile("Test Audio", 300, "mp3");

    library.addMedia(&audioFile);

    EXPECT_EQ(library.findMedia("Test Audio"), &audioFile);
}

TEST(LibraryTest, RemoveMediaTest) {
    Library library;
    AudioFile audioFile("Test Audio", 300, "mp3");

    library.addMedia(&audioFile);
    library.removeMedia("Test Audio");

    EXPECT_EQ(library.findMedia("Test Audio"), nullptr);
}

TEST(LibraryTest, FindMediaTest) {
    Library library;
    MusicTrack track("Test Track", 200, "wav", "Test Artist", "Test Album");

    library.addMedia(&track);

    AudioContent* foundMedia = library.findMedia("Test Track");
    EXPECT_EQ(foundMedia, &track);
    EXPECT_EQ(foundMedia->getTitle(), "Test Track");
}

TEST(LibraryTest, DisplayAllMediaTest) {
    Library library;
    AudioFile audioFile("Audio File 1", 300, "mp3");
    MusicTrack track("Music Track 1", 200, "wav", "Artist", "Album");
    Podcast podcast("Podcast 1", 3600, "Episode 1", "Host");

    library.addMedia(&audioFile);
    library.addMedia(&track);
    library.addMedia(&podcast);

    testing::internal::CaptureStdout();
    library.displayAllMedia();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Audio File 1") != std::string::npos);
    EXPECT_TRUE(output.find("Music Track 1") != std::string::npos);
    EXPECT_TRUE(output.find("Podcast 1") != std::string::npos);
}
