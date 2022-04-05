/*	Detyra 5
	Matricat përmes strukturës vector
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<vector<int>> vect; // [[0, 1, 2], [1, 2, 3], [2, 3, 4]]

	for (int i = 0; i < 3; i++)
	{
		vector<int> innerVector; // []
		for (int j = 0; j < 3; j++)
		{
			innerVector.push_back(i + j); // [2, 3, 4]
		}

		vect.push_back(innerVector);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vect.at(i).at(j) << " ";
		}

		cout << endl;
	}

	cout << endl;

	return 0;
}
