#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Podcast.h>


Podcast::Podcast(const string& title, int TimeInSeconds, const string& format, const string& host)
	: AudioFile(title, TimeInSeconds, format), host(host) {}






void Podcast::addEpisode(const string& episode) {


    episodes.push_back(episode);

}






void Podcast::play() const {
    cout << "Podcast: " << title << " hosted by " << host << endl;
    for (const auto& episode : episodes) {
        cout << "  Episode: " << episode << endl;
    }
}

string Podcast::getHost() const {
    return host;  
}