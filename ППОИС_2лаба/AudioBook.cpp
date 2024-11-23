#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioBook.h>


AudioBook::AudioBook(const string& title, int TimeInSeconds, const string& format, const string& author, const string& narrator)
	: AudioFile ( title,  TimeInSeconds,  format), author(author), narrator(narrator){}





string AudioBook::getAuthor() const {

	return author;
}




string AudioBook::getNarrator() const {

	return narrator;
}


void AudioBook::play() const {


	cout << "Playing audiobook: " << title << " by " << author << ", narrated by " << narrator << endl;



}