/*	Detyra 1 - Reprezentimi i grafeve përmes
	matricës së fqinjësisë
*/
#include <iostream>

using namespace std;

int main() {

	const int numriNyjeve = 5;
	int matricaFqinjesise[numriNyjeve][numriNyjeve] = {
		{0, 1, 0, 0, 1},
		{1, 0, 0, 1, 0},
		{0, 0, 0, 1, 1},
		{0, 1, 1, 0, 1},
		{1, 0, 1, 1, 0}
	};

	for (int i = 0; i < numriNyjeve; i++)
	{
		cout << "Fqinjet e nyjes " << i << ": ";
		for (int j = 0; j < numriNyjeve; j++)
		{
			if (matricaFqinjesise[i][j] == 1) {
				cout << j << " ";
				
			}
		}

		cout << endl;
	}

	return 0;
}

/*	Detyra 2 - Reprezentimi i grafeve përmes
	listës së fqinjësisë
*/

#include <iostream>
#include <vector>

using namespace std;

struct Node {
	char value;
	vector<char> neighbours;
};

int main() {

	vector<Node> nodes;

	Node a;
	a.value = 'A';
	a.neighbours.push_back('B');
	a.neighbours.push_back('E');
	nodes.push_back(a);

	Node b;
	b.value = 'B';
	b.neighbours.push_back('A');
	b.neighbours.push_back('B');
	b.neighbours.push_back('D');
	nodes.push_back(b);

	Node c;
	c.value = 'C';
	c.neighbours.push_back('D');
	c.neighbours.push_back('E');
	nodes.push_back(c);

	Node d;
	d.value = 'D';
	d.neighbours.push_back('B');
	d.neighbours.push_back('C');
	d.neighbours.push_back('E');
	nodes.push_back(d);

	Node e;
	e.value = 'E';
	e.neighbours.push_back('A');
	e.neighbours.push_back('C');
	e.neighbours.push_back('D');
	nodes.push_back(e);

	for (int i = 0; i < nodes.size(); i++)
	{
		cout << "Nyja " << nodes.at(i).value << " eshte e lidhur me: ";
		for (int j = 0; j < nodes.at(i).neighbours.size(); j++)
		{
			cout << nodes.at(i).neighbours.at(j) << " ";
		}

		cout << endl;
	}

	return 0;
}

/*	Detyra 3 - Reprezentimi i grafeve përmes
	listës së degëve
*/
#include <iostream>
#include <vector>

using namespace std;

struct Node {
	char value;
	vector<char> neighbours;
};

int main() {

	vector<Node> nodes;
	vector<string> listaDegeve;

	Node a;
	a.value = 'A';
	a.neighbours.push_back('B');
	a.neighbours.push_back('E');
	nodes.push_back(a);

	Node b;
	b.value = 'B';
	b.neighbours.push_back('A');
	b.neighbours.push_back('B');
	b.neighbours.push_back('D');
	nodes.push_back(b);

	Node c;
	c.value = 'C';
	c.neighbours.push_back('D');
	c.neighbours.push_back('E');
	nodes.push_back(c);

	Node d;
	d.value = 'D';
	d.neighbours.push_back('B');
	d.neighbours.push_back('C');
	d.neighbours.push_back('E');
	nodes.push_back(d);

	Node e;
	e.value = 'E';
	e.neighbours.push_back('A');
	e.neighbours.push_back('C');
	e.neighbours.push_back('D');
	nodes.push_back(e);

	for (int i = 0; i < nodes.size(); i++)
	{
		string node;
		node.push_back(nodes.at(i).value);
		cout << "Nyja " << nodes.at(i).value << " eshte e lidhur me: ";
		for (int j = 0; j < nodes.at(i).neighbours.size(); j++)
		{
			string neighbour;
			neighbour.push_back(nodes.at(i).neighbours.at(j));
			cout << nodes.at(i).neighbours.at(j) << " ";
			listaDegeve.push_back(node + "->" + neighbour);
		}

		cout << endl;
	}

	cout << endl;
	for (int i = 0; i < listaDegeve.size(); i++)
	{
		cout << listaDegeve.at(i) << endl;
	}


	return 0;
}
