#include <iostream>

int factorial(int number) {
	if ((number == 0) || (number == 1))
		return 1;
	else
		return number* factorial(number - 1);
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << factorial(num);


	return 0;
}