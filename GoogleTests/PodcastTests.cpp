#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Podcast.h>

TEST(PodcastTest, ConstructorAndGetHostTest) {
    Podcast podcast("Tech Talk", 3600, "mp3", "John Doe");

    EXPECT_EQ(podcast.getHost(), "John Doe");

    EXPECT_EQ(podcast.getTitle(), "Tech Talk");
}

TEST(PodcastTest, AddEpisodeTest) {
    Podcast podcast("Science Weekly", 1800, "mp3", "Jane Smith");

    podcast.addEpisode("Episode 1: The Universe");
    podcast.addEpisode("Episode 2: Quantum Physics");

    testing::internal::CaptureStdout();
    podcast.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Podcast: Science Weekly hosted by Jane Smith") != std::string::npos);
    EXPECT_TRUE(output.find("  Episode: Episode 1: The Universe") != std::string::npos);
    EXPECT_TRUE(output.find("  Episode: Episode 2: Quantum Physics") != std::string::npos);
}

TEST(PodcastTest, EmptyPodcastTest) {
    Podcast podcast("Empty Podcast", 900, "mp3", "Hostless");

    testing::internal::CaptureStdout();
    podcast.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Podcast: Empty Podcast hosted by Hostless") != std::string::npos);
    EXPECT_TRUE(output.find("  Episode:") == std::string::npos); 
}
