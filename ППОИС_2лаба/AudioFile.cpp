#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>

AudioFile::AudioFile(const string& title, int TimeInSeconds, const string& format) : AudioContent(title, TimeInSeconds), format(format) {}


string AudioFile::getFormat()const{
    return format;
}



void AudioFile::play() const {

    cout << "Âîñïðîèçâîäèòñÿ Àóäèî: " << title << " [" << format << " ]\n";

}