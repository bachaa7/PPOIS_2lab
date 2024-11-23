#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include</�����/�����/����\�����_2����\�����_2����\Lybryris.h>
#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>

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

