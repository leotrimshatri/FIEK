/* Detyra 4
   Struktura vector
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vector;

	for (int i = 0; i < 5; i++)
	{
		vector.push_back(i + 1);
	}

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector.at(i) << " ";
	}

	cout << endl;
	
	vektori.clear();

	cout << vektori.size() << endl;

	cout << endl;

	return 0;
}
