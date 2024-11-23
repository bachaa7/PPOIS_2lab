#ifndef USERPLAYLIST_H
#define USERPLAYLIST_H

#include </�����/�����/����/�����_2����/�����_2����/Playlist.h>
#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>
#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>



class UserPlaylist {
private:
    Playlist* playlist;
    UserAccount* user;

public:
    UserPlaylist(Playlist* playlist, UserAccount* user);

    void linkPlaylistToUser(UserAccount* user);
    void play();
};

#endif


