#include <iostream>

int main()
{
	int N;
	
	std::cin >> N;

	int* arr;
		
	arr = new int [1000000];

	int max = -1000000, min = 1000000;

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
		
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	std::cout << min << " " << max;

	return 0;
}