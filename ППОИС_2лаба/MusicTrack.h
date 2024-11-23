#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>

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