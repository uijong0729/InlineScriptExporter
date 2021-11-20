#include <iostream>
#include "FilerLoader.h"

using namespace file;

int main()
{
    FilerLoader fileLoader;
    bool exe = fileLoader.LoadFile("aaa.html");
    return 0;
}