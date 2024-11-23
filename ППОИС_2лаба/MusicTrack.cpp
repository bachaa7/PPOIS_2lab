#include </�����/�����/����/�����_2����/�����_2����/MusicTrack.h>


MusicTrack::MusicTrack(const string& title, int TimeInSeconds, const string& format, const string& artist, const string& album)
    : AudioFile(title, TimeInSeconds, format), artist(artist), album(album) {}

string MusicTrack::getArtist() const {
    return artist;
}

string MusicTrack::getAlbum() const {
    return album;
}

void MusicTrack::play() const {
    cout << "��������������� �����������  ���� : " << title << " �� " << artist << " �� ������� " << album << "\n";
}