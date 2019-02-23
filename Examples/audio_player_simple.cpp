#include <nana/audio/player.hpp>

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
#ifdef NANA_ENABLE_AUDIO

    nana::audio::player player("../Examples/audio1.wav");
    player.play();  //Play the audio, it waits until the audio is finished.

#endif	//NANA_ENABLE_AUDIO

}

