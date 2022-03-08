#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b = 0;
	
public:
	void setA(int a) {
		this->a = a;
	}

	int getA() {
		return a;
	}

	void setB(int b) {
		b = b; // Nuk ndryshohet vlera e anetarit privat b
	}

	int getB() {
		return b; // 0
	}
};

int main() {

	Pika p;

	p.setA(4);
	cout << "a: " << p.getA() << endl;

	p.setB(7);
	cout << "b: " << p.getB() << endl;

	return 0;
}
