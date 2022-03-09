#include <iostream>

int main()
{
	int A, B, C;

	std::cin >> A >> B >> C;

	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int temp = A * B * C;

	while (temp / 10 != 0)
	{
		arr[temp % 10]++;
		temp = temp / 10;

	}
	if (temp % 10 != 0)
	{
		arr[temp]++;
	}


	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}