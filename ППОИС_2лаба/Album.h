#ifndef ALBUM_H
#define ALBUM_H

#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>


class Album {
private:
    string albumName;
    vector<AudioFile*> tracks;
    int totalDuration;

public:
    Album(const string& albumName);

    void addTrack(AudioFile* track);
    int getTotalDuration();
    void play();
};

#endif

