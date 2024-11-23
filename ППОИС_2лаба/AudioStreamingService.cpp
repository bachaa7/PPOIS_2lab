#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioStreamingService.h>


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
        cout << "Нет рекламы.\n";
    }
}

void AudioStreamingService::listUsers() {
    cout << "Пользователь зарегистрирован в  " << serviceName << ":\n";
    for (const auto& user : users) {
        cout << user->getUsername() << "\n";
    }
}
