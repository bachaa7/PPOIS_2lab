#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserPlaylist.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserPlaylist.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/MusicTrack.h>                                                                                          
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.h>

TEST(UserPlaylistTest, PlayFunctionTest) {
    Playlist playlist("Test Playlist");
    UserAccount user("test_user", "test_user@example.com", "secure_password");

    MusicTrack track1("Track 1", 180, "mp3", "Artist 1", "Album 1");
    MusicTrack track2("Track 2", 240, "mp3", "Artist 2", "Album 2");
    playlist.AddTrack(&track1);
    playlist.AddTrack(&track2);

    UserPlaylist userPlaylist(nullptr, nullptr);

    userPlaylist.linkPlaylistToUser(&user);
    *reinterpret_cast<Playlist**>(&userPlaylist) = &playlist; 
    testing::internal::CaptureStdout();
    userPlaylist.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("test_user is playing their playlist:") != std::string::npos);
    EXPECT_TRUE(output.find("Playing music track: Track 1 by Artist 1 from album Album 1") != std::string::npos);
    EXPECT_TRUE(output.find("Playing music track: Track 2 by Artist 2 from album Album 2") != std::string::npos);
}
