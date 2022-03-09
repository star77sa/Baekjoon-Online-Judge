#include <iostream>

int main()
{
	int numArr[9];
	int temp;
	int max = 0;
	int num = 0;


	for (int i = 0; i < 9; i++)
	{
		std::cin >> temp;
		numArr[i] = temp;
		if (max < temp)
		{
			max = temp;
			num = i;
		}

	}

	std::cout << max << std::endl << num+1;

	return 0;
}