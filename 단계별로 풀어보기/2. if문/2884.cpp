#include <iostream>

int main()
{

	int H, M;

	std::cin >> H >> M;

	if (M >= 45)
	{
		M -= 45;
	}
	else
	{
		M += 15;
		H = (H + 23) % 24;

	}
	
	std::cout << H << ' ' << M;


	return 0;
}