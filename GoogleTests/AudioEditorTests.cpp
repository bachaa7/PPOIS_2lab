#include "pch.h"
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioEditor.h>
#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/AudioEditor.cpp>

TEST(AudioEditorTest, ConstructorTest) {
    AudioEditor editor("Test Audio", 300, "mp3", 0.8, 1.2);
    EXPECT_EQ(editor.getTitle(), "Test Audio");
    EXPECT_EQ(editor.getTimeInSeconds(), 300);
    EXPECT_EQ(editor.getFormat(), "mp3");
    EXPECT_DOUBLE_EQ(editor.getVolume(), 0.8);
    EXPECT_DOUBLE_EQ(editor.getSpeed(), 1.2);
}

TEST(AudioEditorTest, SetVolumeTest) {
    AudioEditor editor("Test Audio", 300, "mp3");
    editor.setVolume(0.5);
    EXPECT_DOUBLE_EQ(editor.getVolume(), 0.5);

    testing::internal::CaptureStdout();
    editor.setVolume(1.5); 
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Некорректное значение громкости"), std::string::npos);
}

TEST(AudioEditorTest, SetSpeedTest) {
    AudioEditor editor("Test Audio", 300, "mp3");
    editor.setSpeed(1.5);
    EXPECT_DOUBLE_EQ(editor.getSpeed(), 1.5);

    testing::internal::CaptureStdout();
    editor.setSpeed(-1.0); 
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Некорректное значение скорости"), std::string::npos);
}

TEST(AudioEditorTest, AddEffectTest) {
    AudioEditor editor("Test Audio", 300, "mp3");
    editor.addEffect("Echo");
    editor.addEffect("Bass Boost");

    testing::internal::CaptureStdout();
    editor.applyEffects();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Echo"), std::string::npos);
    EXPECT_NE(output.find("Bass Boost"), std::string::npos);
}

TEST(AudioEditorTest, PlayTest) {
    AudioEditor editor("Test Audio", 300, "mp3", 0.7, 1.1);
    editor.addEffect("Reverb");
    editor.addEffect("Distortion");

    testing::internal::CaptureStdout();
    editor.play();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Воспроизведение аудио: Test Audio [mp3]"), std::string::npos);
    EXPECT_NE(output.find("Громкость: 70%"), std::string::npos);
    EXPECT_NE(output.find("скорость: 1.1x"), std::string::npos);
    EXPECT_NE(output.find("Reverb"), std::string::npos);
    EXPECT_NE(output.find("Distortion"), std::string::npos);
}
