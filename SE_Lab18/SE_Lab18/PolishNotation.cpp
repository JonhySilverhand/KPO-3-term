#include <iostream>
#include <map>
#include <stack>
using namespace std;

map<char, int> Priority = {
	{'(', 1},
	{')', 1},
	{'+', 2},
	{'-', 2},
	{'*', 3},
	{'/', 3},
};

bool PolishNotation(char* str, string& resultstr)
{
	stack<char> stack;
	for (int i = 0; i < strlen(str); i++)
	{
		char s = str[i];
		if (s == ' ' || s == '\t')
			continue;
		if (s == '(')
		{
			stack.push(s);
		}
		else if (s == ')')
		{
			if (stack.empty())
				return false;
			while (stack.top() != '(')
			{
				s = stack.top();
				stack.pop();
				resultstr.push_back(s);
				if (stack.empty())
					return false;
			}
			stack.pop();
		}
		else if (s == '+' || s == '-' || s == '*' || s == '/')
		{
			while (!stack.empty() && Priority[s] <= Priority[stack.top()])
			{
				resultstr.push_back(stack.top());
				stack.pop();
			}
			stack.push(s);
		}
		else
		{
			resultstr.push_back(s);
		}
	}
	while (!stack.empty())
	{
		char s = stack.top();
		stack.pop();
		if (s == '(')
			return false;
		while (!stack.empty() && Priority[s] <= Priority[stack.top()])
		{
			resultstr.push_back(stack.top());
			stack.pop();
		}
		resultstr.push_back(s);
	}
	return true;
}