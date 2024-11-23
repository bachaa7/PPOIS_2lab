#include </�����/�����/����/�����_2����/�����_2����/UserPlaylist.h>




UserPlaylist::UserPlaylist(Playlist* playlist, UserAccount* user) : playlist(playlist), user(user) {}

void UserPlaylist::linkPlaylistToUser(UserAccount* user) {
    this->user = user;
}

void UserPlaylist::play() {
    if (user) {
        cout << user->getUsername() << " ������ ��� �������� :\n";
        playlist->playAll();
    }
    else {
        cout << "�� ���� ������������ �� ������ � ���� ������� ���������������.\n";
    }
}
