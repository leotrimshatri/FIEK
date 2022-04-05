/*	Detyra 3
	Funksionet e struktruës array
 */
 #include <iostream>
#include <array>

using namespace std;

int main() {

	const int gjatesia = 5;
	array<int, gjatesia> arr;

	for (int i = 0; i < arr.size(); i++)
	{
		arr.at(i) = i + 1; // arr[i] = i + 1;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr.at(i) << " ";
	}

	cout << endl;

	for (auto i = arr.begin(); i < arr.end(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;

	for (auto i = arr.rbegin(); i < arr.rend(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;

	cout << "Gjatesia e vargut: " << arr.size() << endl;
	cout << "Elementi i pare i vargut: " << arr.front() << endl;
	cout << "Elementi i fundit i vargut: " << arr.back() << endl;
	return 0;
}
