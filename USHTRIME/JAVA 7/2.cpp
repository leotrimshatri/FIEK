/*	Detyra 2
	Printimi i elementeve brenda stack-ut
	a) Modifikimi i gjatësisë së stack-ut
	b) Ruajtja e gjatësisë së stack-ut para unazës for
	c) Printimi përmes unazës while
*/
//a
#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int>* stack) {
	for (int i = 0; i < stack->size(); i++)
	{
		cout << stack->top() << " ";
		stack->pop();
	}

	cout << endl;
}

int main() {

	stack<int> firstStack;

	for (int i = 0; i < 10; i++)
	{
		firstStack.push(i + 1);
	}

	cout << "Elementi i fundit ne stack: " << firstStack.top() << endl;

	printStack(&firstStack);

	return 0;
}

//b
#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int>* stack) {
	int stackSize = stack->size();
	for (int i = 0; i < stackSize; i++)
	{
		cout << stack->top() << " ";
		stack->pop();
	}

	cout << endl;
}

int main() {

	stack<int> firstStack;

	for (int i = 0; i < 10; i++)
	{
		firstStack.push(i + 1);
	}

	cout << "Elementi i fundit ne stack: " << firstStack.top() << endl;

	printStack(&firstStack);

	return 0;
}

//c 
#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int>* stack) {
	while (!stack->empty()) {
		cout << stack->top() << " ";
		stack->pop();
	}
	cout << endl;
}

int main() {
	
	stack<int> firstStack;

	for (int i = 0; i < 10; i++)
	{
		firstStack.push(i + 1);
	}

	cout << "Top: " << firstStack.top() << endl;
	printStack(&firstStack);

	return 0;
}
