
#ifndef PLAYLIST_H
#define PLAYLIST_H


#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioContent.h>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>


class Playlist
{

private:

	string name;
	vector<AudioContent*> tracks;


public:

	Playlist(const string& name);

	void AddTrack(AudioContent* track);
	
	void playAll() const ;

};

#endif 