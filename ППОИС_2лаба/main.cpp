#include <iostream>

#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Advertisement.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Album.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioBook.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioContent.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioEditor.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioFile.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioStreamingService.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Library.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/MusicTrack.h>                                                                                          
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Podcast.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Settings.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Playlist.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Subscription.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/UserAccount.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/UserPlaylist.h>


using namespace std;










int main()
{

    setlocale(LC_ALL, "RU");


    AudioFile audio("Example Audio", 300, "mp3");
    AudioBook audiobook("Example Audiobook", 600, "mp3", "Author Name", "Narrator Name");
    MusicTrack musicTrack("Example Track", 250, "wav", "Artist", "Album Name");

    cout << "Audio File Info: " << endl;
    cout << "Title: " << audio.getTitle() << ", Format: " << audio.getFormat() << ", Duration: " << audio.getTimeInSeconds() << " seconds" << endl;
    audio.play();

    cout << "\nAudiobook Info: " << endl;
    cout << "Title: " << audiobook.getTitle() << ", Author: " << audiobook.getAuthor() << ", Narrator: " << audiobook.getNarrator() << ", Duration: " << audiobook.getTimeInSeconds() << " seconds" << endl;
    audiobook.play();

    Podcast podcast("Tech Talks", 1200, "mp3", "John Doe");
    podcast.addEpisode("Episode 1: Introduction to Programming");
    podcast.addEpisode("Episode 2: Advanced Topics");
    cout << "\nPodcast Info: " << endl;
    cout << "Host: " << podcast.getHost() << ", Title: " << podcast.getTitle() << endl;
    podcast.play();

    Library mediaLibrary;

    mediaLibrary.addMedia(&audio);
    mediaLibrary.addMedia(&audiobook);
    mediaLibrary.addMedia(&musicTrack);

    mediaLibrary.displayAllMedia();


    Album album("Greatest Hits");
    album.addTrack(&audio);
    album.addTrack(&musicTrack);
    cout << "\nAlbum Info: " << endl;
    album.play();

    UserAccount user("username1", "user@example.com", "password123");
    user.displayAccountInfo();

    Subscription subscription(&user, "Premium");
    subscription.activateSubscription();
    cout << "Subscription status: " << (subscription.isActiveStatus() ? "Active" : "Inactive") << endl;

    Settings settings;
    settings.setTheme("Dark");
    settings.setFont("Verdana");
    settings.displaySettings();

    AudioEditor audioEditor("Edited Audio", 300, "mp3");
    audioEditor.setVolume(0.8);
    audioEditor.setSpeed(1.2);
    audioEditor.addEffect("Echo");
    audioEditor.applyEffects();
    audioEditor.play();

    Playlist playlist("My Playlist");
    playlist.AddTrack(&audio);
    playlist.AddTrack(&musicTrack);
    cout << "\nPlaying Playlist: " << endl;
    playlist.playAll();

    UserPlaylist userPlaylist(&playlist, &user);
    userPlaylist.play();

    Advertisement ad("This is a great product!", 30);
    ad.playAd();
   
    return 0;
}

