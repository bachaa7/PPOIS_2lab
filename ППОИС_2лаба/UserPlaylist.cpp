#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserPlaylist.h>




UserPlaylist::UserPlaylist(Playlist* playlist, UserAccount* user) : playlist(playlist), user(user) {}

void UserPlaylist::linkPlaylistToUser(UserAccount* user) {
    this->user = user;
}

void UserPlaylist::play() {
    if (user) {
        cout << user->getUsername() << " is playing their playlist:\n";
        playlist->playAll();
    }
    else {
        cout << "No user linked to this playlist.\n";
    }
}
