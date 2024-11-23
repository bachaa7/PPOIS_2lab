#ifndef AUDIOSTREAMINGSERVICE_H
#define AUDIOSTREAMINGSERVICE_H

#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Advertisement.h>
#include <cstdlib>
#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>


class AudioStreamingService {
private:
    string serviceName;
    vector<UserAccount*> users;
    vector<Advertisement*> ads;

public:
    AudioStreamingService(const string& serviceName);

    void registerUser(UserAccount* user);
    void playAd();
    void listUsers();
};

#endif
