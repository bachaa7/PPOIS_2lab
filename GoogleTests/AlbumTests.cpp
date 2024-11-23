#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Album.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Album.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioContent.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioContent.cpp>


#include <sstream>

TEST(AlbumTest, AddTrackAndTotalDurationTest) {
    Album album("My Favorite Album");

    AudioFile track1("Track 1", 120, "mp3");
    AudioFile track2("Track 2", 150, "mp3");

    album.addTrack(&track1);
    album.addTrack(&track2);

    EXPECT_EQ(album.getTotalDuration(), 270); 
}


TEST(AlbumTest, PlayAlbumTest) {
    Album album("Test Album");

    AudioFile track1("Track 1", 180, "mp3");
    AudioFile track2("Track 2", 200, "wav");
    album.addTrack(&track1);
    album.addTrack(&track2);

    testing::internal::CaptureStdout();
    album.play();  
    std::string result = testing::internal::GetCapturedStdout();  

    EXPECT_NE(result.find("Playing album: Test Album\n"), std::string::npos);

    EXPECT_NE(result.find("Audio Play: Track 1 [mp3 ]\n"), std::string::npos);

    EXPECT_NE(result.find("Audio Play: Track 2 [wav ]\n"), std::string::npos);
}