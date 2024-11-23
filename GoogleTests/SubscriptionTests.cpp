#include "pch.h"
#include </�����/�����/����/�����_2����/�����_2����/Subscription.h>
#include </�����/�����/����/�����_2����/�����_2����/Subscription.cpp>
#include </�����/�����/����/�����_2����/�����_2����/UserAccount.h>

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
