#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/MusicTrack.h>


MusicTrack::MusicTrack(const string& title, int TimeInSeconds, const string& format, const string& artist, const string& album)
    : AudioFile(title, TimeInSeconds, format), artist(artist), album(album) {}

string MusicTrack::getArtist() const {
    return artist;
}

string MusicTrack::getAlbum() const {
    return album;
}

void MusicTrack::play() const {
    cout << "Воспроизводится музыкальный  трек : " << title << " от " << artist << " из альбома " << album << "\n";
}