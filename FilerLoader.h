#pragma once

namespace file
{
	class FilerLoader
	{
	public:
		FilerLoader();
		bool LoadFile(const char* fileName) const;

	private:
		// const 메서드. 해당 개체 안의 어떠한 것도 바꾸지 않음
		bool isHtml(const char* str) const;
	};
}