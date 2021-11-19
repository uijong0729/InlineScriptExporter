#include <fstream>
#include <iostream>
#include <cstdio>

using namespace std;

class FilerLoader
{
public:
    bool LoadFile(const char* fileName)
    {
        size_t fSize = strlen(fileName);

        if (fSize < 5)
        {
            cout << "file name size : " << fSize << " / file name : " << fileName << endl;
            cout << "«Õ«¡«¤«ëÙ£ª¬ïáª·ª¯ª¢ªêªÞª»ªó¡£" << endl;
            return false;
        }
        else
        {
            char postfix[4];
            for (int i = 0; i < 4; ++i)
            {
                postfix[i] = fileName[fSize - 4 + i];
            }
            cout << postfix[0] << postfix[1] << postfix[2] << postfix[3];

        }


        return false;
    }
};

