#include </�����/�����/����/�����_2����/�����_2����/AudioFile.h>

AudioFile::AudioFile(const string& title, int TimeInSeconds, const string& format) : AudioContent(title, TimeInSeconds), format(format) {}


string AudioFile::getFormat()const{
    return format;
}



void AudioFile::play() const {

    cout << "��������������� �����: " << title << " [" << format << " ]\n";

}