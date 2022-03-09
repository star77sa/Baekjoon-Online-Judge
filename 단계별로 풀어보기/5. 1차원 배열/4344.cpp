#include <iostream>
#include <stdio.h>

int main()
{
	int N;
	std::cin >> N;

	int arr[1000];
	float sum;

	for (int i = 0; i < N; i++)
	{
		float count = 0;
		int student;
		
		std::cin >> student;


		sum = 0;

		for (int i = 0; i < student; i++)
		{
			std::cin >> arr[i];
			sum += arr[i];
		}
		
		float aver = sum / student;
		
		for (int i = 0; i < student; i++)
		{
			if (arr[i] > aver)
			{
				count++;
			}
		}
		
		
		printf("%.3f", count*100 / student);
		std::cout << "%" << std::endl;
	}

	return 0;
}