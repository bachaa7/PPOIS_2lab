#include </�����/�����/����/�����_2����/�����_2����/Album.h>



Album::Album(const string& albumName) : albumName(albumName), totalDuration(0) {}

void Album::addTrack(AudioFile* track) {
    tracks.push_back(track);
    totalDuration += track->getTimeInSeconds();
}

int Album::getTotalDuration() {
    return totalDuration;
}

void Album::play() {
    cout << "Playing album: " << albumName << "\n";
    for (const auto& track : tracks) {
        track->play();
    }
}
