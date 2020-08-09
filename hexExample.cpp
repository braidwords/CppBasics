#include "hexExample.h"
#include<iostream>
#include "hexExample.h"
void printHex()
{
    int a{ 0x11 };
    int b{ 0x10 };
    int c{ 100 };
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << std::hex << c;
}