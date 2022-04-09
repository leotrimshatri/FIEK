/*	Detyra 4
	Valid brackets - stack
*/
#include <iostream>
#include <stack>

using namespace std;

bool validBrackets(string expression) {
	stack<char> expressionStack;

	for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == '(') {
			expressionStack.push(expression[i]);
		}
		else {
			if (expressionStack.empty()) {
				return false;
			}
			else {
				expressionStack.pop();
			}
		}
	}

	return expressionStack.empty();
}


int main() {

	cout << validBrackets("()");
	cout << validBrackets("((()()))");
	cout << validBrackets(")()()()(");
	

	return 0;
}
