#include </�����/�����/����/�����_2����/�����_2����/Advertisement.h>
#include </�����/�����/����/�����_2����/�����_2����/Lybryris.h>



Advertisement::Advertisement(const string& adContent, int duration) : adContent(adContent), duration(duration) {}

void Advertisement::playAd() {
    cout << "Playing ad: " << adContent << " [" << duration << " seconds]\n";
}
