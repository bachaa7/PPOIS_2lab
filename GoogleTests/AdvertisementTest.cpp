#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Advertisement.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Advertisement.cpp>

#include <gtest/gtest.h>
#include <sstream>

TEST(AdvertisementTest, ConstructorTest) {
    Advertisement ad("Buy the best product ever!", 30);

    std::ostringstream output;
    testing::internal::CaptureStdout(); 

    ad.playAd();
    output << testing::internal::GetCapturedStdout();

    std::string result = output.str();
    EXPECT_NE(result.find("Playing ad: Buy the best product ever!"), std::string::npos);
    EXPECT_NE(result.find("[30 seconds]"), std::string::npos);
}

TEST(AdvertisementTest, PlayAdTest) {
    Advertisement ad("Buy the best product ever!", 30);

    std::ostringstream output;
    testing::internal::CaptureStdout(); 
    ad.playAd();
    output << testing::internal::GetCapturedStdout();

    std::string result = output.str();
    EXPECT_EQ(result, "Playing ad: Buy the best product ever! [30 seconds]\n");
}

TEST(AdvertisementTest, ChangeAdContentTest) {
    Advertisement newAd("Check out our new app!", 15);

    std::ostringstream output;
    testing::internal::CaptureStdout(); 
    newAd.playAd();
    output << testing::internal::GetCapturedStdout();

    std::string result = output.str();
    EXPECT_EQ(result, "Playing ad: Check out our new app! [15 seconds]\n");
}
