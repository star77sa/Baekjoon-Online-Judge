#include <iostream>

int d(int i)
{
	int n = i;
	int sum = 0;

	while(n / 10 != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	sum += n % 10;

	return sum + i;
}

int main()
{
	int arr[10001];

	for (int i = 1; i < 10001; i++)
	{
		arr[i] = i;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (d(i) < 10001)
		{
			arr[d(i)] = 0;
		}
	}

	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] != 0)
		{
			std::cout << arr[i] << std::endl;
		}
	}

	return 0;
}