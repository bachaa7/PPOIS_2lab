#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/MusicTrack.h>    

TEST(MusicTrackTest, ConstructorAndGettersTest) {
    MusicTrack track("Test Song", 240, "mp3", "Test Artist", "Test Album");

    EXPECT_EQ(track.getTitle(), "Test Song");

    EXPECT_EQ(track.getTimeInSeconds(), 240);

    EXPECT_EQ(track.getFormat(), "mp3");

    EXPECT_EQ(track.getArtist(), "Test Artist");

    EXPECT_EQ(track.getAlbum(), "Test Album");
}

TEST(MusicTrackTest, PlayTest) {
    MusicTrack track("Test Song", 240, "mp3", "Test Artist", "Test Album");

    testing::internal::CaptureStdout();
    track.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Playing music track: Test Song by Test Artist from album Test Album\n");
}
