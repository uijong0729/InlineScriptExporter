#pragma once

namespace file
{
	class FilerLoader
	{
	public:
		FilerLoader();
		bool LoadFile(const char* fileName) const;

	private:
		// const �޼���. �ش� ��ü ���� ��� �͵� �ٲ��� ����
		bool isHtml(const char* str) const;
	};
}