#ifndef SOCERS_H
#define SOCERS_H

#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <mmsystem.h>
#include <conio.h>

#pragma comment(lib, "winmm.lib")
int playsound(const char* name)
{
    PlaySoundA(name, 0, SND_FILENAME | SND_ASYNC);
	return 0;
}
int tpw(const char* txt, int spd, bool lin)
{
    int count = 0;
    while (txt[count] != '\0')
    {
        printf("%c", txt[count]);
        Sleep(spd);
        ++count;
    }
    if (lin)
    {
        printf("\n");
    }
    
    return 0;
}

int anykey()
{
    while (true)
    {
        if(_getch()) {
            break;
        }
    }
    return 0;
}



#endif