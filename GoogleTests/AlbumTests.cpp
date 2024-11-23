#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/Album.h>
#include </�����/�����/����/�����_2����/�����_2����/Album.cpp>
#include </�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioFile.cpp>
#include </�����/�����/����/�����_2����/�����_2����/AudioContent.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioContent.cpp>


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