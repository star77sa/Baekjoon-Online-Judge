#include <iostream>


int main()
{
	int A, B, C;

	std::cin >> A >> B >> C;

	if ((A == B) && (A == C))
	{
		std::cout << 10000 + A * 1000;
	}

	else if ((A == B) && (A != C))
	{
		std::cout << 1000 + A * 100;
	}
	else if ((A == C) && (A != B))
	{
		std::cout << 1000 + A * 100;
	}
	else if ((B == C) && (B != A))
	{
		std::cout << 1000 + B * 100;
	}

	else
	{
		if ((A > B) && (A > C))
		{
			std::cout << A * 100;
		}
		else if ((B > A) && (B > C))
		{
			std::cout << B * 100;
		}
		else
		{
			std::cout << C * 100;
		}
	}


	return 0;
}