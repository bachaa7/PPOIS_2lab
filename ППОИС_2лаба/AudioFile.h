#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>
#include "/�����/�����/����/�����_2����/�����_2����/AudioContent.h"

class AudioFile : public AudioContent{

private:

	string format;

public:


	AudioFile(const string& title, int TimeInSeconds, const string& format);


		string getFormat() const ;

	void play() const override;

};


#endif  AUDIOFILE_H