
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>
#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>


#ifndef PODCAST_H
#define PODCAST_H


class Podcast: public AudioFile
{


private:

	string host;
	vector<string> episodes;





public:


	Podcast(const string& title, int TimeInSeconds, const string& format, const string& host);
	void addEpisode(const string& episode);
	void play() const override;
	string getHost() const;

};














#endif