/* Detyra 3
	Queue përmes vargjeve
*/
#include <iostream>

using namespace std;

class Queue {
private:
	int* queue = NULL;
	int capacity;
	int length;
	int front;
	int back;
public:
	Queue(int capacity) {
		this->capacity = capacity;
		length = 0;
		front = -1;
		back = -1;
		queue = new int[capacity];
	}

	int size() {
		return length;
	}

	bool empty() {
		/*if (length == 0) {
			return true;
		}
		else {
			return false;
		}*/

		// return length == 0 ? true : false;
		return length == 0;
	}

	void push(int value) {
		if (length == capacity) {
			return;
		}

		queue[length] = value;
		length++;
		if (length == 1) {
			front = 0;
			back = 0;
		}
		else {
			back = length - 1;
		}
	}

	void pop() {
		if (empty()) {
			return;
		}

		length--;
		if (empty()) {
			front = -1;
			back = -1;
		}
		else {
			front++;
		}

	}

	int top() {
		if (empty()) {
			return -1;
		}

		return queue[front];
	}

	void print() {
		for (int i = front; i <= back; i++)
		{
			cout << queue[i] << " ";
		}

		cout << endl;
	}
};

int main() {

	Queue customQueue(4);

	customQueue.push(3);
	customQueue.push(4);
	customQueue.print();
	cout << "Top: " << customQueue.top() << endl;
	customQueue.pop();
	customQueue.pop();
	cout << "Top: " << customQueue.top() << endl;

	return 0;
}
