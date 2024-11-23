#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Subscription.h>
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
