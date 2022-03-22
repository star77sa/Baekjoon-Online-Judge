#include <iostream>
#include <string>

#include <cctype>

int main()
{
	std::string str;

	std::cin >> str;

	int count = 0;

	while (str[count])
	{
		str[count] = toupper(str[count]);
		count++;
	}
	// 대문자 변환 완료

	char alpha[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//26
	int countt[26] = {};

	for (int i = 0; i < 26; i++)
	{
		countt[i] = 0;

		int cnt = 0;
		while (cnt < str.size())
		{
			if (alpha[i] == str[cnt])
			{
				countt[i] += 1;
			}
			cnt++;
		}

	}

	int max = 0;
	int index = 0;
	for (int i = 0; i < 26; i++)
	{
		if (countt[i] > max)
		{
			max = countt[i];
			index = i;
		}
	}


	bool same = false;
	for (int i = 0; i < 26; i++)
	{
		if ((countt[i] == max )&& (i != index))
		{
			same = true;
		}
	}

	if (same == true)
	{
		std::cout << "?";
	}
	else
	{
		std::cout << alpha[index];
	}


	return 0;
}