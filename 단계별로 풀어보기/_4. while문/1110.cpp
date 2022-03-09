#include <iostream>

int main()
{
	int N;

	std::cin >> N;

	int value = N;
	int i = 0;
	int temp;

	if (N < 10)
	{
		value = (N*11);
	}
	else
	{
		temp = N % 10 + N / 10;
		value = (value % 10) * 10 + temp % 10;
	}
	i++;

	while (value != N)
	{
		if (value< 10)
		{
			value = value * 11;
		}
		else
		{
			temp = value % 10 + value / 10;
			value = (value % 10) * 10 + temp%10;
		}
		i++;
	}

	std::cout << i;

	return 0;
}