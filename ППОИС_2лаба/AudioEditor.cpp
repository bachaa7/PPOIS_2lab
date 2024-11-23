#include </�����/�����/����/�����_2����/�����_2����/AudioEditor.h>

AudioEditor::AudioEditor(const string& title, int timeInSeconds, const string& format, double volume, double speed)
    : AudioFile(title, timeInSeconds, format), volume(volume), speed(speed) {}

void AudioEditor::setVolume(double newVolume) {
    if (newVolume >= 0.0 && newVolume <= 1.0) {
        volume = newVolume;
        cout << "��������� �������� �� " << volume * 100 << "%.\n";
    }
    else {
        cout << "������������ �������� ���������. ������� �������� �� 0 �� 1.\n";
    }
}

void AudioEditor::setSpeed(double newSpeed) {
    if (newSpeed > 0.0) {
        speed = newSpeed;
        cout << "�������� ��������������� �������� �� " << speed << "x.\n";
    }
    else {
        cout << "������������ �������� ��������. ������� �������� ������ 0.\n";
    }
}

void AudioEditor::addEffect(const string& effect) {
    effects.push_back(effect);
    cout << "�������� ������: " << effect << "\n";
}

void AudioEditor::applyEffects() const {
    cout << "����������� ��������� �������:\n";
    for (const auto& effect : effects) {
        cout << "- " << effect << "\n";
    }
}

void AudioEditor::play() const {
    cout << "��������������� �����: " << getTitle() << " [" << getFormat() << "]\n";
    cout << "���������: " << volume * 100 << "%, ��������: " << speed << "x\n";
    applyEffects();
}

double AudioEditor::getVolume() const {
    return volume;
}

double AudioEditor::getSpeed() const {
    return speed;
}
