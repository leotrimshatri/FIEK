/*	Detyra 1
	Lista e lidhur
*/
#include <iostream>

using namespace std;

struct ListItem {
	int value;
	ListItem* next;
	ListItem* previous;
};

int main() {

	ListItem firstItem;
	firstItem.value = 3;
	firstItem.previous = NULL;
	firstItem.next = NULL;

	ListItem secondItem;
	secondItem.value = 6;
	secondItem.next = NULL;
	secondItem.previous = &firstItem;

	firstItem.next = &secondItem;

	ListItem thirdItem = { 2, NULL, &secondItem };
	secondItem.next = &thirdItem;

	cout << "1 - Adresa: " << &firstItem << endl;
	cout << "1 - Vlera: " << firstItem.value << endl;
	cout << "1 - Adresa e elementit paraprak: " << firstItem.previous << endl;
	cout << "1 - Adresa e elementit vijues: " << firstItem.next << endl;
	cout << endl;
	cout << "2 - Adresa: " << &secondItem << endl;
	cout << "2 - Vlera: " << secondItem.value << endl;
	cout << "2 - Adresa e elementit paraprak: " << secondItem.previous << endl;
	cout << "2 - Adresa e elementit vijues: " << secondItem.next << endl;
	cout << endl;
	cout << "3 - Adresa: " << &thirdItem << endl;
	cout << "3 - Vlera: " << thirdItem.value << endl;
	cout << "3 - Adresa e elementit paraprak: " << thirdItem.previous << endl;
	cout << "3 - Adresa e elementit vijues: " << thirdItem.next << endl;

	return 0;
}

/*	Detyra 2 
	Lista e lidhura përmes librarisë standarde
*/
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> firstList;
	int value;

	for (int i = 0; i < 6; i++)
	{
		cout << "Vlera per elementin " << i + 1 << ": ";
		cin >> value;
		value % 2 == 0 ? firstList.push_front(value) : firstList.push_back(value);
	}

	for (auto it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	return 0;
}

/*	Detyra 3
	Listat e lidhura, shuma e numrave brenda listës
*/

// Mënyra 1
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> firstList;
	int value;
	int shuma = 0, shumaCift = 0, shumaTek = 0;

	for (int i = 0; i < 6; i++)
	{
		cout << "Vlera per elementin " << i + 1 << ": ";
		cin >> value;
		if (value % 2 == 0) {
			firstList.push_front(value);
			shumaCift += value;
		}
		else {
			firstList.push_back(value);
			shumaTek += value;
		}

		shuma += value;
	}

	for (auto it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	cout << "Shuma e numrave cift: " << shumaCift << endl;
	cout << "Shuma e numrave tek: " << shumaTek << endl;
	cout << "Totali: " << shuma << endl;

	return 0;
}

// Mënyra 2
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> firstList;
	int value;
	int shuma = 0, shumaCift = 0, shumaTek = 0;

	for (int i = 0; i < 6; i++)
	{
		cout << "Vlera per elementin " << i + 1 << ": ";
		cin >> value;
		value % 2 == 0 ? firstList.push_front(value) : firstList.push_back(value);
	}

	for (auto it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
		if (*it % 2 == 0) {
			shumaCift += *it;
		}
		else {
			shumaTek += *it;
		}

		shuma += *it;
	}

	cout << endl;

	cout << "Shuma e numrave cift: " << shumaCift << endl;
	cout << "Shuma e numrave tek: " << shumaTek << endl;
	cout << "Totali: " << shuma << endl;

	return 0;
}

// Mënyra 3
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> firstList;
	int value, shumaCift = 0, shumaTek = 0;

	for (int i = 0; i < 6; i++)
	{
		cout << "Vlera per elementin " << i + 1 << ": ";
		cin >> value;
		value % 2 == 0 ? firstList.push_front(value) : firstList.push_back(value);
	}

	for (auto it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	while(!firstList.empty()){
		if (firstList.front() % 2 == 0) {
			shumaCift += firstList.front();
			firstList.pop_front();
		}
		else {
			shumaTek += firstList.back();
			firstList.pop_back();
		}
	}

	cout << "Shuma cift: " << shumaCift << endl;
	cout << "Shuma tek: " << shumaTek << endl;
	cout << "Shuma: " << shumaCift + shumaTek << endl;



	return 0;
}

/*	Detyra 4
	Forward list
*/
#include <iostream>
#include <forward_list>

using namespace std;

int main() {

	forward_list<int> firstForwardList;

	firstForwardList.push_front(4);
	firstForwardList.push_front(7);
	firstForwardList.push_front(3);
	firstForwardList.sort();

	firstForwardList.reverse();

	while (!firstForwardList.empty()) {
		cout << firstForwardList.front() << " ";
		firstForwardList.pop_front();
	}

	return 0;
}

/*	Detyra 5
	Krijimi i pemës
*/
#include <iostream>

using namespace std;

struct Node {
	char value;
	Node* left = NULL;
	Node* right = NULL;
};

int main() {

	Node* root = new Node;
	root->value = 'A';

	Node* B = new Node;
	B->value = 'B';
	root->left = B;

	Node* C = new Node;
	C->value = 'C';
	root->right = C;

	Node* D = new Node;
	D->value = 'D';
	root->left->left = D;

	Node* E = new Node;
	E->value = 'E';
	root->left->right = E;

	Node* F = new Node;
	F->value = 'F';
	root->right->left = F;

	return 0;
}

/*	Detyra 6
	Metodat BFT dhe DFT për përshkim të pemës
*/
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct Node {
	char value;
	Node* left = NULL;
	Node* right = NULL;
};

void bft(Node* root) {
	if (root == NULL) {
		return;
	}

	queue<Node*> nodes;
	nodes.push(root);
	while (!nodes.empty()) {
		Node* currentNode = nodes.front();
		nodes.pop();
		cout << currentNode->value << " ";
		if (currentNode->left != NULL) {
			nodes.push(currentNode->left);
		}
		if (currentNode->right != NULL) {
			nodes.push(currentNode->right);
		}

	}

	cout << endl;
}

void dft(Node* root) {
	if (root == NULL) {
		return;
	}

	stack<Node*> nodes;
	nodes.push(root);
	while (!nodes.empty()) {
		Node* currentNode = nodes.top();
		nodes.pop();
		cout << currentNode->value << " ";
		if (currentNode->right != NULL) {
			nodes.push(currentNode->right);
		}
		if (currentNode->left != NULL) {
			nodes.push(currentNode->left);
		}

	}

	cout << endl;
}

int main() {

	Node* root = new Node;
	root->value = 'A';

	Node* B = new Node;
	B->value = 'B';
	root->left = B;

	Node* C = new Node;
	C->value = 'C';
	root->right = C;

	Node* D = new Node;
	D->value = 'D';
	B->left = D;

	Node* E = new Node;
	E->value = 'E';
	B->right = E;

	Node* F = new Node;
	F->value = 'F';
	C->left = F;

	cout << "BFT: ";
	bft(root);
	cout << "DFT: ";
	dft(root);

	return 0;
}
