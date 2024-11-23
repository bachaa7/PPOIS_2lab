#ifndef AUDIOEDITOR_H
#define AUDIOEDITOR_H

#include</�����/�����/����/�����_2����/�����_2����/AudioFile.h>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>
#include </�����/�����/����/�����_2����/�����_2����/AudioFile.h>


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
