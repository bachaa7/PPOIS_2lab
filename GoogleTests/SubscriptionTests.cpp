#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Subscription.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Subscription.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/UserAccount.h>

TEST(SubscriptionTest, ConstructorTest) {
    UserAccount user("test_user", "password");
    Subscription subscription(&user, "Premium");

    EXPECT_FALSE(subscription.isActiveStatus());
}

TEST(SubscriptionTest, ActivateSubscriptionTest) {
    UserAccount user("test_user", "password");
    Subscription subscription(&user, "Premium");

    subscription.activateSubscription();

    EXPECT_TRUE(subscription.isActiveStatus());
}

TEST(SubscriptionTest, CancelSubscriptionTest) {
    UserAccount user("test_user", "password");
    Subscription subscription(&user, "Premium");

    subscription.activateSubscription();
    EXPECT_TRUE(subscription.isActiveStatus());

    subscription.cancelSubscription();

    EXPECT_FALSE(subscription.isActiveStatus());
}
