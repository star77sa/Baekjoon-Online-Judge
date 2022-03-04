#include <iostream>

int main()
{
	int T;
	int A, B;

	std::cin >> T;

	for (int i = 1; i <= T; i++)
	{
		std::cin >> A >> B;
		std::cout << "Case #" << i << ": " << A + B << std::endl;
	}

	return 0;
}