#ifndef SOCERS_H
#define SOCERS_H

#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

// 한 글자씩 글자 출력. 
// 첫 번째 인수는 출력할 문자열. 두 번째 인수는 글자 사이의 기다릴 시간(ms) 세 번째 인수는 출력 완료 후 개행 여부.
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
// 지정한 키를 누를 때까지 기다리기. ASCII 키코드로 넣어야함.
// 인수에 넣지 않을 시 아무 키나 누를 때까지 기다림
int keywait(int key)
{
    while (true)
    {
        if(_getch() == key) {
            break;
        }
    }
    return 0;
}



#endif