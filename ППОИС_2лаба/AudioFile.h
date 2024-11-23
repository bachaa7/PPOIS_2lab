#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include</Учеба/ППОИС/Лабы\ППОИС_2лаба\ППОИС_2лаба\Lybryris.h>
#include "/Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioContent.h"

class AudioFile : public AudioContent{

private:

	string format;

public:


	AudioFile(const string& title, int TimeInSeconds, const string& format);


		string getFormat() const ;

	void play() const override;

};


#endif  AUDIOFILE_H