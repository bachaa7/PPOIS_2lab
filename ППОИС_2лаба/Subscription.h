#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include</Ó÷åáà/ÏÏÎÈÑ/Ëàáû\ÏÏÎÈÑ_2ëàáà\ÏÏÎÈÑ_2ëàáà\Lybryris.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.h>

class Subscription {
private:
    UserAccount* user;
    string subscriptionType;
    bool isActive;

public:
    Subscription(UserAccount* user, const string& subscriptionType);

    void activateSubscription();
    void cancelSubscription();
    bool isActiveStatus() const;
};

#endif

