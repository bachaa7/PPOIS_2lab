#ifndef AUDIOEDITOR_H
#define AUDIOEDITOR_H

#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioFile.h>


using namespace std;

class AudioEditor : public AudioFile {
private:
    double volume; 
    double speed; 
    vector<string> effects; 

public:
    AudioEditor(const string& title, int timeInSeconds, const string& format, double volume = 1.0, double speed = 1.0);

    void setVolume(double newVolume);
    void setSpeed(double newSpeed);

    void addEffect(const string& effect);

    void applyEffects() const;

    void play() const override;

    double getVolume() const;
    double getSpeed() const;
};

#endif
