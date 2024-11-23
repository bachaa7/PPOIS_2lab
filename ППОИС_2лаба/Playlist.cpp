#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Playlist.h>


Playlist::Playlist( const string& name): name(name){}

void Playlist::AddTrack(AudioContent* track) {

	tracks.push_back(track);

}


void Playlist::playAll() const {

	cout << "Play list play: " << name << "\n";
	for (const auto& track : tracks) {
		track->play();
	}

}