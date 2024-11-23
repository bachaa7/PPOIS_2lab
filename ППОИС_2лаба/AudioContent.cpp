#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioContent.h>


AudioContent::AudioContent(const string& title, int TimeInSeconds) 
	: title(title), TimeInSeconds(TimeInSeconds) {}



string AudioContent::getTitle() const {
	return title;
}


double AudioContent::getTimeInSeconds() const {
	return TimeInSeconds;
}



