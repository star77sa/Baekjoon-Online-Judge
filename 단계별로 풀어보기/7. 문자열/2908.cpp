#include <iostream>
#include <string>

int main()
{
	int str1, str2;

	std::cin >> str1;

	std::string s = std::to_string(str1);

	char temp = s[0];
	s[0] = s[2];
	s[2] = temp;

	str1 = std::stoi(s);

	

	std::cin >> str2;

	std::string s2 = std::to_string(str2);

	char temp2 = s2[0];
	s2[0] = s2[2];
	s2[2] = temp2;

	str2 = std::stoi(s2);

	if (str1 > str2)
	{
		std::cout << str1;
	}
	else
	{
		std::cout << str2;
	}
	return 0;
}