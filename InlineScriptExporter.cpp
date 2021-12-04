#include <iostream>
#include "FilerLoader.h"

int main()
{
    FilerLoader fileLoader;
    bool exe = fileLoader.LoadFile("aaa.html");
    return 0;
}