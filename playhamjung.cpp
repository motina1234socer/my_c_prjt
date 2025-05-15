#include <windows.h>
#include <iostream>
#include <Mmsystem.h>
#include <string>
#pragma comment(lib, 'winmm.lib')

int main()
{
    std::string igonan = ".\\Audio\\hamjung.wav";
    PlaySoundA(igonan.c_str(), NULL, SND_SYNC);
    return 0;
}