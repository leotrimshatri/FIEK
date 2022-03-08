#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b;
	
public:
	Pika(int a, int b) {
		cout << "Konstruktori me parametra" << endl;
		this->a = a;
		this->b = b;
	}

	~Pika() {
		cout << "Destruktori" << endl;
	}

	int shuma() {
		return a + b;
	}
};

int main() {

	Pika p(4, 1);

	cout << "Shuma: " << p.shuma() << endl;

	return 0;
}
