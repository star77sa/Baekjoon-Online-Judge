#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
int main()
{

	int N;
	std::cin >> N;

	int num;

	std::stack<int> arr;
	std::string* oper = new std::string[500000];
	int cnt = 0; // +�� -�� ����
	
	
	int temp = 2; // �迭�� �־��� ����
	arr.push(1);
	oper[cnt++] = "+";


	for (int i = 0; i < N; i++) // ������ŭ
	{
		std::cin >> num; // ������ ���� ����.

		if (arr.empty() == true) // ���������
		{
			arr.push(temp++);
			oper[cnt++] = "+";

			while ((arr.empty() != true) && (arr.top() != num) && (temp <= N+1)) // ��������ʰ� ����������
			{
				arr.push(temp++);
				oper[cnt++] = "+";
			}

			while ((arr.empty() != true) && (arr.top() == num) && (temp <= N+1)) // ��������ʰ� ������
			{
				arr.pop();
				oper[cnt++] = "-";
			}

		}

		else {
			while ((arr.empty() != true) && (arr.top() != num) && (temp <= N + 1)) // ��������ʰ� ����������
			{
				arr.push(temp++);
				oper[cnt++] = "+";
			}

			while ((arr.empty() != true) && (arr.top() == num) && (temp <= N + 1)) // ��������ʰ� ������
			{
				arr.pop();
				oper[cnt++] = "-";
			}
		}
	}



	if ((arr.empty() == false))
	{
		std::cout << "NO";
	}

	else
	{
		for (int i = 0; i < cnt; i++)
		{
			std::cout << oper[i];
			printf("\n");
		}
	}

	return 0;
}