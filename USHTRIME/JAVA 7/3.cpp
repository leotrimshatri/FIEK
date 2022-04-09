/*	Detyra 3
	Kopjimi i stack
*/
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

void initalizeStack(stack<int>& stack, int size) {
	int value;
	for (int i = 0; i < size; i++)
	{
		cout << "Value: ";
		cin >> value;
		stack.push(value);
	}
}

int main() {
	
	stack<int> firstStack;
	stack<int> secondStack;
	int stackSize = 0;

	cout << "Set first stack size: ";
	cin >> stackSize;

	initalizeStack(firstStack, stackSize);

	cout << "Set second stack size: ";
	cin >> stackSize;
	initalizeStack(secondStack, stackSize);

	secondStack.swap(firstStack);
	cout << "First stack: " << endl;
	printStack(&firstStack);
	cout << "Second stack: " << endl;
	printStack(&secondStack);

	return 0;
}
