/*	Detyra 5
	Të implementohet struktura stack përmes vargjeve duke mundësuar
	funksionalitetet në vijim:
	a) push -> të shtohet vlera e caktuar në stack
	b) pop -> të largohet vlera e fundit nga stack
	c) top -> kthen pozitën e anëtarit të fundit në stack
	d) empty -> tregon nëse stacku është i zbrazët
	e) print -> printon anëtarët e stackut
	f) clear -> largon anëtarët nga stacku
*/
#include <iostream>

using namespace std;

class Stack {
private:
	int length;
	int capacity;
	int* stack = NULL;
public:
	Stack(int capacity) {
		this->capacity = capacity;
		length = 0;
		stack = new int[capacity];
	}

	~Stack() {
		delete[] stack;
	}

	int size() {
		return length;
	}

	bool empty() {
		return length == 0;
		/*
		* if(length == 0) {
		*	return true;
		* } else {
		*	return false;
		* }
		*/
	}

	void print() {
		for (int i = length - 1; i >= 0; i--)
		{
			cout << stack[i] << " ";
		}
		cout << endl;
	}

	void push(int value) {
		if (length == capacity) {
			cout << "Out of storage" << endl;
			return;
		}

		stack[length] = value;
		length++;
		cout << "Value added succesfully" << endl;
	}

	void pop() {
		if (empty()) {
			cout << "Stack is empty" << endl;
			return;
		}

		length--;
		cout << "Value removed succesfully" << endl;
	}

	int top() {
		return empty() ? -1 : stack[length - 1];
	}

	void clear() {
		length = 0;
	}
};

int main() {

	int stackSize = -1;

	cout << "Percakto madhesine e stack: ";
	cin >> stackSize;

	Stack stack(stackSize);
	stack.pop();
	cout << "Top: " << stack.top() << endl;
	stack.push(7);
	stack.push(9);
	stack.push(2);
	stack.pop();
	stack.push(4);
	stack.print();
	cout << "Stack size: " << stack.size() << endl; // 3
	stack.pop();
	cout << "Top: " << stack.top() << endl; // 9
	stack.print(); // 9, 7
	cout << "Stack size: " << stack.size() << endl; // 2
	stack.clear();
	cout << "Stack size: " << stack.size() << endl; // 0
	stack.push(11);
	stack.print();

	return 0;
}
