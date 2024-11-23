#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>






class AudioBook: public AudioFile
{


private:

	string author;
	string narrator;

public:

	AudioBook(const string& title, int TimeInSeconds, const string& format, const string& author, const string& narrator);


    string getAuthor() const;
	string getNarrator() const;
	void play() const override;



};





#endif