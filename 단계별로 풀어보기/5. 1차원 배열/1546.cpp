#include <iostream>
#include <stdio.h>

int main()
{
	int N;

	std::cin >> N;

	float max = 0, sum = 0;
	float arr[1000];

	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] * 100 / max;

		sum += arr[i];
	}

	printf("%.10f", sum / N);
	return 0;
}