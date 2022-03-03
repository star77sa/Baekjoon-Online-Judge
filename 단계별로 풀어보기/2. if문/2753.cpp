#include <iostream>

int main()
{
	int Y;

	std::cin >> Y;

	if (((Y % 4 == 0) && (Y % 100 != 0)) || Y % 400 == 0)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}

	return 0;
}