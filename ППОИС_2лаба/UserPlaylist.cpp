#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/UserPlaylist.h>




UserPlaylist::UserPlaylist(Playlist* playlist, UserAccount* user) : playlist(playlist), user(user) {}

void UserPlaylist::linkPlaylistToUser(UserAccount* user) {
    this->user = user;
}

void UserPlaylist::play() {
    if (user) {
        cout << user->getUsername() << " играет его плейлист :\n";
        playlist->playAll();
    }
    else {
        cout << "Ни один пользователь не связан с этим списком воспроизведения.\n";
    }
}
