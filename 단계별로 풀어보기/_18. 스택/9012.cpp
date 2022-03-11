#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::stack<char> mystack;

	int N;
	std::cin >> N;
	std::string expr;


	for (int i = 0; i < N; i++)
	{
		std::cin >> expr;

		bool check = true;

		for (int i = 0; i < expr.size(); i++) {
			char ch = expr[i];
			if (ch == '(')
			{
				mystack.push('(');
			}
			else
			{
				if (mystack.empty())
				{
					check = false;
				}
				else
				{
					mystack.pop();
				}
			}
		}

		if (mystack.empty() == false)
		{
			check = false;
		}

		if (check == true) {
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
		
		while (mystack.empty() == false)
		{
			mystack.pop();
		}

	}

	return 0;
}