#pragma once
#include <fstream>

class FilerLoader
{
public:
	FilerLoader();
	bool LoadFile(const char* fileName) const;

private:
	// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����
	bool isHtml(const char* str) const;
	void exportScripts(std::fstream* fsi);
	void createJs(std::fstream* fso);
};
