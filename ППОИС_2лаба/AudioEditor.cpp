#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioEditor.h>

AudioEditor::AudioEditor(const string& title, int timeInSeconds, const string& format, double volume, double speed)
    : AudioFile(title, timeInSeconds, format), volume(volume), speed(speed) {}

void AudioEditor::setVolume(double newVolume) {
    if (newVolume >= 0.0 && newVolume <= 1.0) {
        volume = newVolume;
        cout << "Громкость изменена на " << volume * 100 << "%.\n";
    }
    else {
        cout << "Некорректное значение громкости. Укажите значение от 0 до 1.\n";
    }
}

void AudioEditor::setSpeed(double newSpeed) {
    if (newSpeed > 0.0) {
        speed = newSpeed;
        cout << "Скорость воспроизведения изменена на " << speed << "x.\n";
    }
    else {
        cout << "Некорректное значение скорости. Укажите значение больше 0.\n";
    }
}

void AudioEditor::addEffect(const string& effect) {
    effects.push_back(effect);
    cout << "Добавлен эффект: " << effect << "\n";
}

void AudioEditor::applyEffects() const {
    cout << "Применяются следующие эффекты:\n";
    for (const auto& effect : effects) {
        cout << "- " << effect << "\n";
    }
}

void AudioEditor::play() const {
    cout << "Воспроизведение аудио: " << getTitle() << " [" << getFormat() << "]\n";
    cout << "Громкость: " << volume * 100 << "%, скорость: " << speed << "x\n";
    applyEffects();
}

double AudioEditor::getVolume() const {
    return volume;
}

double AudioEditor::getSpeed() const {
    return speed;
}
