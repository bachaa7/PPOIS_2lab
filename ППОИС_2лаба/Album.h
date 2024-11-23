#ifndef ALBUM_H
#define ALBUM_H

#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>


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

