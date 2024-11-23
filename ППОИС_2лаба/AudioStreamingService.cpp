#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/AudioStreamingService.h>


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
        cout << "No ads available.\n";
    }
}

void AudioStreamingService::listUsers() {
    cout << "Users registered in " << serviceName << ":\n";
    for (const auto& user : users) {
        cout << user->getUsername() << "\n";
    }
}
