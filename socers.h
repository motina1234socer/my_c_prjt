#ifndef SOCERS_H
#define SOCERS_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <string>



// 한 글자씩 글자 출력. 
// 첫 번째 인수는 출력할 문자열. 두 번째 인수는 글자 사이의 기다릴 시간(ms) 세 번째 인수는 출력 완료 후 개행 여부.
int tpw(std::string txt, int spd = 25, bool lin = true)
{
    for(size_t i = 0; i < txt.length(); ++i)
    {
        std::cout << txt[i];
        Sleep(spd);
    }
    if (lin)
    {
        std::cout << "\n";
    }
    
    return 0;
}
int wtpw(std::wstring txt, int spd = 25, bool lin = true)
{
    for(size_t i = 0; i < txt.length(); ++i)
    {
        std::wcout << txt[i];
        Sleep(spd);
    }
    
    if (lin)
    {
        std::wcout << "\n";
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