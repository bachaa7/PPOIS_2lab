#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/Playlist.h>
#include </�����/�����/����/�����_2����/�����_2����/Playlist.cpp>
#include </�����/�����/����/�����_2����/�����_2����/MusicTrack.h>    

TEST(PlaylistTest, AddTrackTest) {
    Playlist playlist("My Favorite Playlist");

    MusicTrack track("Test Song", 240, "mp3", "Test Artist", "Test Album");

    playlist.AddTrack(&track);

    testing::internal::CaptureStdout();
    playlist.playAll();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Play list play: My Favorite Playlist") != std::string::npos);
    EXPECT_TRUE(output.find("Playing music track: Test Song by Test Artist from album Test Album") != std::string::npos);
}

TEST(PlaylistTest, EmptyPlaylistTest) {
    Playlist playlist("Empty Playlist");

    testing::internal::CaptureStdout();
    playlist.playAll();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Play list play: Empty Playlist\n");
}
