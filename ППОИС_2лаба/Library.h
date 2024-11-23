#ifndef LIBRARY_H
#define LIBRARY_H

#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>
#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include </�����/�����/����/�����_2����/�����_2����/Podcast.h>
#include </�����/�����/����/�����_2����/�����_2����/MusicTrack.h>

using namespace std;

class Library {
private:
    vector<AudioContent*> mediaCollection;  

public:
    void addMedia(AudioContent* media);

    void removeMedia(const string& title);

    AudioContent* findMedia(const string& title);

    void displayAllMedia() const;
};

#endif


