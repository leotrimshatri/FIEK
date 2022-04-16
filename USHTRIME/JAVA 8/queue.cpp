/*	Detyra 1
	Queue 
*/
#include <iostream>
#include <queue>

using namespace std;


int main() {

	queue<int> firstQueue;

	for (int i = 0; i < 10; i++)
	{
		firstQueue.push(i + 1);
	}

	cout << "Vlera e pare ne queue: " << firstQueue.front() << endl;
	cout << "Vlera e fundit ne queue: " << firstQueue.back() << endl;

	cout << "Vlerat ne queue: " << endl;

	while (!firstQueue.empty()) {
		cout << firstQueue.front() << " ";
		firstQueue.pop();
	}
	

	return 0;
}
