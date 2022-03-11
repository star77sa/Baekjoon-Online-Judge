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
	int cnt = 0; // +와 -의 개수
	
	
	int temp = 2; // 배열에 넣어줄 숫자
	arr.push(1);
	oper[cnt++] = "+";


	for (int i = 0; i < N; i++) // 갯수만큼
	{
		std::cin >> num; // 수열의 구성 숫자.

		if (arr.empty() == true) // 비어있을때
		{
			arr.push(temp++);
			oper[cnt++] = "+";

			while ((arr.empty() != true) && (arr.top() != num) && (temp <= N+1)) // 비어있지않고 같지않을때
			{
				arr.push(temp++);
				oper[cnt++] = "+";
			}

			while ((arr.empty() != true) && (arr.top() == num) && (temp <= N+1)) // 비어있지않고 같을때
			{
				arr.pop();
				oper[cnt++] = "-";
			}

		}

		else {
			while ((arr.empty() != true) && (arr.top() != num) && (temp <= N + 1)) // 비어있지않고 같지않을때
			{
				arr.push(temp++);
				oper[cnt++] = "+";
			}

			while ((arr.empty() != true) && (arr.top() == num) && (temp <= N + 1)) // 비어있지않고 같을때
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