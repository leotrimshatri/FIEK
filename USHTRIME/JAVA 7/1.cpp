/*	Detyra 1
	Shembull me librarinë stack
*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> firstStack;

	for (int i = 0; i < 10; i++)
	{
		firstStack.push(i + 1);
	}

	cout << "Top: " << firstStack.top() << endl;

	return 0;
}
