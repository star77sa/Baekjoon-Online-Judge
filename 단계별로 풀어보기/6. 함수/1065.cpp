#include <iostream>

int A(int i)
{
	int count = 0;

	int a, b, c;

	// 1, 2�ڸ� �� �϶�
	if (i / 100 == 0)
	{
		return 1;
	}
	// 3, 4�ڸ� �� �� �� (1000�� �ƴϹǷ� �׳� 3�ڸ��� ������)
	else
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;

		if (b - a == c - b)
		{
			return 1;
		}
		return 0;
	}

}

int main()
{
	int N;

	std::cin >> N;

	int count = 0;

	for (int i = 1; i <= N; i++)
	{
		count += A(i);

	}
	std::cout << count;

	
}