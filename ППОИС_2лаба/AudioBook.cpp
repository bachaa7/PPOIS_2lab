#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioBook.h>


AudioBook::AudioBook(const string& title, int TimeInSeconds, const string& format, const string& author, const string& narrator)
	: AudioFile ( title,  TimeInSeconds,  format), author(author), narrator(narrator){}





string AudioBook::getAuthor() const {

	return author;
}




string AudioBook::getNarrator() const {

	return narrator;
}


void AudioBook::play() const {


	cout << "Воспроизводится аудиокнига : " << title << " от " << author << ", чтец " << narrator << endl;



}