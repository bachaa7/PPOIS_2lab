#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Subscription.h>
#include <iostream>
using namespace std;

Subscription::Subscription(UserAccount* user, const string& subscriptionType)
    : user(user), subscriptionType(subscriptionType), isActive(false) {}

void Subscription::activateSubscription() {
    isActive = true;
    cout << "Подписка активирована для " << user->getUsername() << ".\n";
}

void Subscription::cancelSubscription() {
    isActive = false;
    cout << "Подписка отменена для " << user->getUsername() << ".\n";
}

bool Subscription::isActiveStatus() const {
    return isActive;
}
