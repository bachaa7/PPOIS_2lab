#include </�����/�����/����/�����_2����/�����_2����/Playlist.h>


Playlist::Playlist( const string& name): name(name){}

void Playlist::AddTrack(AudioContent* track) {

	tracks.push_back(track);

}


void Playlist::playAll() const {

	cout << "��������������� ��������: " << name << "\n";
	for (const auto& track : tracks) {
		track->play();
	}

}