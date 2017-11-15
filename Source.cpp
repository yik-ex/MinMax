#pragma once
#include <string>
#include <iostream>
#include "MinMax.h"

class StringCompare
{
	bool m_caseSensitive;

public:
	StringCompare() : m_caseSensitive(true) {}
	StringCompare(bool isSensitive) : m_caseSensitive(isSensitive) {}
	
	bool operator()(char * str1, char * str2)
	{
		int val = (m_caseSensitive) ? strcmp(str1, str2) : stricmp(str1, str2);
		return val > 0;
	}

};

int main(void)
{
	char * str1 = "Yossef";
	char * str2 = "yosseF";
	char * str3 = "yosSeF";


	std::cout << min(str1, str2, str3, StringCompare(true)) << std::endl;
	std::cout << min(str1, str2, str3, StringCompare(false)) << std::endl;
	std::cout << max(str1, str2, str3, StringCompare(true)) << std::endl;
	std::cout << max(str1, str2, str3, StringCompare(false)) << std::endl;


	


	return 0;
}