#include <fstream>
#include <iostream>
#include <cstdio>
#include "FilerLoader.h"

using namespace std;

FilerLoader::FilerLoader()
{

}

bool FilerLoader::LoadFile(const char* fileName) const
{

	if (isHtml(fileName))
	{
		// read only
		fstream fsOrigin;
		fsOrigin.open(fileName, ios_base::in);

		// write only
		fstream fsCreator;
		fsCreator.open(fileName, ios_base::out);


		fsOrigin.close();
		fsCreator.close();
	}


	return false;
}

bool FilerLoader::isHtml(const char* str) const
{
	size_t fSize = strlen(str);

	if (fSize < 5)
	{
		cout << "file name size : " << fSize << " / file name : " << str << endl;
		cout << "«Õ«¡«¤«ëÙ£ª¬ïáª·ª¯ª¢ªêªÞª»ªó¡£" << endl;
		return false;
	}
	else
	{
		char postfix[4];
		for (int i = 0; i < 4; ++i)
		{
			postfix[i] = str[fSize - 4 + i];
		}
		cout << postfix[0] << postfix[1] << postfix[2] << postfix[3];
		return postfix[0] == 'h' && postfix[1] == 't'
			&& postfix[2] == 'm' && postfix[3] == 'l';
	}
}
void FilerLoader::exportScripts(std::fstream* fsi)
{
	cout << "exportScripts";
}
void FilerLoader::createJs(std::fstream* fso)
{
	cout << "createJs";
}