#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>

#ifndef MUSICTRACK_H
#define MUSICTRACK_H

class MusicTrack : public AudioFile
{


private: 

	string artist;
	string album;


public:


    MusicTrack(const string& title, int TimeInSeconds, const string& format, const string& artist, const string& album);
    string getArtist() const;
    string getAlbum() const;
    void play() const override;






};

#endif