
#ifndef PLAYLIST_H
#define PLAYLIST_H


#include </�����/�����/����/�����_2����/�����_2����/AudioContent.h>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>


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