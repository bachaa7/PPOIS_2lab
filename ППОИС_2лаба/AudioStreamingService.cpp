#include </�����/�����/����/�����_2����/�����_2����/AudioStreamingService.h>


AudioStreamingService::AudioStreamingService(const string& serviceName) : serviceName(serviceName) {}

void AudioStreamingService::registerUser(UserAccount* user) {
    users.push_back(user);
}

void AudioStreamingService::playAd() {
    if (!ads.empty()) {
        int randomIndex = rand() % ads.size();
        ads[randomIndex]->playAd();
    }
    else {
        cout << "��� �������.\n";
    }
}

void AudioStreamingService::listUsers() {
    cout << "������������ ��������������� �  " << serviceName << ":\n";
    for (const auto& user : users) {
        cout << user->getUsername() << "\n";
    }
}
