#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Advertisement.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_2ëàáà/ÏÏÎÈÑ_2ëàáà/Lybryris.h>



Advertisement::Advertisement(const string& adContent, int duration) : adContent(adContent), duration(duration) {}

void Advertisement::playAd() {
    cout << "Playing ad: " << adContent << " [" << duration << " seconds]\n";
}
