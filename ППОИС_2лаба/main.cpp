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










#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    AudioFile audio("Конференция", 800, "mp3");
    AudioBook audiobook("Остис", 600, "mp3", "Сотников", "Сотников");
    MusicTrack musicTrack("Лето", 221, "wav", "Кельвин Харрис", "Моушн");

    cout << "Информация о аудиофайле: " << endl;
    cout << "Название: " << audio.getTitle() << ", Формат: " << audio.getFormat() << ", Длительность: " << audio.getTimeInSeconds() << " секунд" << endl;
    audio.play();

    cout << "\nИнформация об аудиокниге: " << endl;
    cout << "Название: " << audiobook.getTitle() << ", Автор: " << audiobook.getAuthor() << ", Чтец: " << audiobook.getNarrator() << ", Длительность: " << audiobook.getTimeInSeconds() << " секунд" << endl;
    audiobook.play();

    Podcast podcast("Технические беседы", 1200, "mp3", "Джон Доу");
    podcast.addEpisode("Эпизод 1: Введение в программирование");
    podcast.addEpisode("Эпизод 2: Продвинутые темы");
    cout << "\nИнформация о подкасте: " << endl;
    cout << "Ведущий: " << podcast.getHost() << ", Название: " << podcast.getTitle() << endl;
    podcast.play();

    Library mediaLibrary;

    mediaLibrary.addMedia(&audio);
    mediaLibrary.addMedia(&audiobook);
    mediaLibrary.addMedia(&musicTrack);

    mediaLibrary.displayAllMedia();

    Album album("Величайшие хиты");
    album.addTrack(&audio);
    album.addTrack(&musicTrack);
    cout << "\nИнформация об альбоме: " << endl;
    album.play();

    UserAccount user("пользователь1", "user@example.com", "password123");
    user.displayAccountInfo();

    Subscription subscription(&user, "Премиум");
    subscription.activateSubscription();
    cout << "Статус подписки: " << (subscription.isActiveStatus() ? "Активна" : "Неактивна") << endl;

    Settings settings;
    settings.setTheme("Тёмная");
    settings.setFont("Verdana");
    settings.displaySettings();

    AudioEditor audioEditor("Отредактированный аудиофайл", 300, "mp3");
    audioEditor.setVolume(0.8);
    audioEditor.setSpeed(1.2);
    audioEditor.addEffect("Эхо");
    audioEditor.applyEffects();
    audioEditor.play();

    Playlist playlist("Мой плейлист");
    playlist.AddTrack(&audio);
    playlist.AddTrack(&musicTrack);
    cout << "\nВоспроизведение плейлиста: " << endl;
    playlist.playAll();

    UserPlaylist userPlaylist(&playlist, &user);
    userPlaylist.play();

    Advertisement ad("Это отличное предложение!", 30);
    ad.playAd();

    return 0;
}

