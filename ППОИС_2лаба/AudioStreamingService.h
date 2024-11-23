#ifndef AUDIOSTREAMINGSERVICE_H
#define AUDIOSTREAMINGSERVICE_H

#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>
#include </�����/�����/����/�����_2����/�����_2����/Advertisement.h>
#include <cstdlib>
#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>


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
