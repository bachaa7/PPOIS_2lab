
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>

#ifndef AUDIOCONTENT_H
#define AUDIOCONTENT_H

class AudioContent 
{

	
	protected:

	string title;
	int TimeInSeconds;


public:

	virtual ~AudioContent() = default;


	AudioContent(const string& title, int TimeInSeconds);
	AudioContent() = default;




	string getTitle() const;

	double getTimeInSeconds() const;


	virtual void play() const = 0;

};


#endif  AUDIOCONTENT_H