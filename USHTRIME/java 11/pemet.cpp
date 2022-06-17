/* Pemët 
	Përshkimi i pemëve përmes metodave: In-order, Pre-order, Post-order dhe Euler Tour.
	Linku për operacionet bazike të pemëve: https://www.cs.usfca.edu/~galles/visualization/BST.html
*/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct Node {
	char value;
	Node* left;
	Node* right;
};

Node* addNode(char value) {
	Node* node = new Node;
	node->value = value;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void bft(Node* node) {
	if (node == NULL) {
		return;
	}

	queue<Node*> nodes;
	nodes.push(node);
	while (!nodes.empty()) {
		auto currentNode = nodes.front();
		nodes.pop();
		cout << currentNode->value << "->";

		if (currentNode->left != NULL) {
			nodes.push(currentNode->left);
		}

		if (currentNode->right != NULL) {
			nodes.push(currentNode->right);
		}
	}

	cout << endl;
}

void dft(Node* node) {
	if (node == NULL) {
		return;
	}

	stack<Node*> nodes;
	nodes.push(node);
	while (!nodes.empty()) {
		auto currentNode = nodes.top();
		nodes.pop();
		cout << currentNode->value << "->";

		if (currentNode->right != NULL) {
			nodes.push(currentNode->right);
		}

		if (currentNode->left != NULL) {
			nodes.push(currentNode->left);
		}
	}

	cout << endl;
}

void preOrder(Node* node) {
	if (node == NULL) {
		return;
	}

	cout << node->value << "->";

	if (node->left != NULL) {
		preOrder(node->left);
	}

	if (node->right != NULL) {
		preOrder(node->right);
	}
}

void inOrder(Node* node) {
	if (node == NULL) {
		return;
	}

	if (node->left != NULL) {
		inOrder(node->left);
	}

	cout << node->value << "->";

	if (node->right != NULL) {
		inOrder(node->right);
	}
}

void eulerTour(Node* node) {
	cout << node->value << "->";

	if (node->left != NULL) {
		eulerTour(node->left);
		cout << node->value << "->";
	}

	if (node->right != NULL) {
		eulerTour(node->right);
		cout << node->value << "->";
	}
}

void postOrder(Node* node) {
	if (node == NULL) {
		return;
	}

	if (node->left != NULL) {
		postOrder(node->left);
	}

	if (node->right != NULL) {
		postOrder(node->right);
	}

	cout << node->value << "->";
}


int main() {

	Node* root = addNode('A');
	root->left = addNode('B');
	root->right = addNode('C');
	root->left->left = addNode('D');
	root->left->right = addNode('E');
	root->right->left = addNode('F');

	cout << "BFT: ";
	bft(root);
	cout << "DFT: ";
	dft(root);
	cout << endl;
	cout << "Pre-order: ";
	preOrder(root);
	cout << endl;
	cout << "In-order: ";
	inOrder(root);
	cout << endl;
	cout << "Post-order: ";
	postOrder(root);
	cout << endl;
	cout << "Euler tour: ";
	eulerTour(root);

	return 0;
}
