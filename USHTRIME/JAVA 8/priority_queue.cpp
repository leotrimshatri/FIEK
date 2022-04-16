/*	Detyra 2
	Priority queue
*/
#include <iostream>
#include <queue>

using namespace std;


int main() {

	priority_queue<int> firstQueue;
	int a;

	for (int i = 0; i < 10; i++)
	{
		cout << "Vlera per queue: ";
		cin >> a;
		firstQueue.push(a);
	}

	cout << "Vlerat ne queue: " << endl;

	while (!firstQueue.empty()) {
		cout << firstQueue.top() << " ";
		firstQueue.pop();
	}
	

	return 0;
}
