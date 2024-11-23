#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Podcast.h>


Podcast::Podcast(const string& title, int TimeInSeconds, const string& format, const string& host)
	: AudioFile(title, TimeInSeconds, format), host(host) {}






void Podcast::addEpisode(const string& episode) {


    episodes.push_back(episode);

}






void Podcast::play() const {
    cout << "Подкаст: " << title << " опубликован " << host << endl;
    for (const auto& episode : episodes) {
        cout << "  Эпизоды: " << episode << endl;
    }
}

string Podcast::getHost() const {
    return host;  
}