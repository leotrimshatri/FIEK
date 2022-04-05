/* Detyra 1
	Krijimi i një strukture të të dhënave
*/

#include <iostream>

using namespace std;

class DynamicArray {
private:
	int capacity;
	int length;
	int* arr = NULL;

public:
	DynamicArray(int capacity) {
		this->capacity = capacity;
		length = 0;
		arr = new int[capacity];
	}
	
	~DynamicArray() {
		delete[] arr;
	}

	int getCapacity() {
		return capacity;
	}

	int getLength() {
		return length;
	}

	int freeSlots() {
		return capacity - length;
	}

	bool isEmpty() {
		return length == 0;
	}

	void add(int members) {
		if (members < 1 || members > this->freeSlots()) {
			cout << "Out of range" << endl;
			return;
		}

		cout << "Ne shtim te " << members << " anetareve.." << endl;
		for (int i = length; i < members + length; i++) {
			cout << "Array[" << i << "]=";
			cin >> arr[i];
		}

		length += members;
	}

	void printMembers(){
		for (int i = 0; i < length; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	int pop() {
		if (isEmpty()) {
			return -1;
		}

		int lastIndex = length - 1;
		int lastValue = arr[lastIndex];
		arr[lastIndex] = -1111111111;
		length--;
		return lastValue;
	}

	int indexOf(int value) {
		for (int i = 0; i < length; i++)
		{
			if (value == arr[i]) {
				return i;
			}
		}

		return -1;
	}
};

int main() {
	
	DynamicArray dynamicArray(40);
	cout << "Gjatesia: " << dynamicArray.getLength() << endl;
	cout << "Kapaciteti: " << dynamicArray.getCapacity() << endl;
	cout << "Hapesira e lira: " << dynamicArray.freeSlots() << endl;

	dynamicArray.add(3);
	dynamicArray.printMembers();
	dynamicArray.add(4);
	dynamicArray.printMembers();

	cout << "Hapesira e lira: " << dynamicArray.freeSlots() << endl;
	cout << "Vlera e larguar nga vargu: " << dynamicArray.pop() << endl;
	dynamicArray.printMembers();
	cout << "Hapesira e lira: " << dynamicArray.freeSlots() << endl;
	cout << "Indeksi i vleres 3: " << dynamicArray.indexOf(3) << endl;
	cout << "Indeksi i vleres 2000: " << dynamicArray.indexOf(2000) << endl;
	return 0;
}
