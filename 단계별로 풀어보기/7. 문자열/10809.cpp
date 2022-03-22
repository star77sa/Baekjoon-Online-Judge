#include <iostream>
#include <string>


int main()
{
	std::string S;
	
	std::cin >> S;
	
	char str[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	for (int i = 0; i < 26; i++)
	{
		int j = 0;
		while ((S[j] != str[i]) && j < S.size())
		{
			j++;
		}

		if (S[j] == str[i])
		{
			std::cout << j << " ";
		}
		else
		{
			std::cout << -1 << " ";
		}

	}
	

	return 0;
}