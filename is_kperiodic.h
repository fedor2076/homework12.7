#pragma once
#include <iostream>
#include <string>


void isKPeriodic(std::string& str, int k)
{
	int len = str.length();
	int p;
	if (len % k)  //если длина строки не кратна K
	{
		std::cout << "string is not a multiple of k=" << k << "\n";
		return;
	}

	for (int i = k; i < len; i += k)
	{
		p = i;
		for (int j = 0; j < k; j++)
		{
			if (str[p] != str[j])
				std::cout << "string is not a multiple of k=" << k << "\n";
			p++;
		}
	}

	std::cout << "string is a multiple of k=" << k << "\n";
}