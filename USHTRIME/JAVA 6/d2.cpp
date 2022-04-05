/*	Detyra 2
	Definimi i vargut përmes strukturës array
*/
#include <iostream>
#include <array>

using namespace std;

int main() {
	
	const int gjatesia = 5;
	array<int, gjatesia> arr;

	for (int i = 0; i < gjatesia; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < gjatesia; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
