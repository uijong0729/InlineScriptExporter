#include <iostream>
#include "FilerLoader.cpp"

int main()
{
    FilerLoader fileLoader;
    bool exe = fileLoader.LoadFile("aaa.html");
    return 0;
}