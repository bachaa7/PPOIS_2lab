#include </�����/�����/����/�����_2����/�����_2����/Subscription.h>
#include <iostream>
using namespace std;

Subscription::Subscription(UserAccount* user, const string& subscriptionType)
    : user(user), subscriptionType(subscriptionType), isActive(false) {}

void Subscription::activateSubscription() {
    isActive = true;
    cout << "Subscription activated for " << user->getUsername() << ".\n";
}

void Subscription::cancelSubscription() {
    isActive = false;
    cout << "Subscription canceled for " << user->getUsername() << ".\n";
}

bool Subscription::isActiveStatus() const {
    return isActive;
}
