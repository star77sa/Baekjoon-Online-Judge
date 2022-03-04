#include <iostream>
#include <stdio.h>

int main()
{
	int N;
	std::cin >> N;

	for (int j = 1; j < 10; j++)
	{
		printf("%d * %d = %d\n", N, j, N*j);
	}




}