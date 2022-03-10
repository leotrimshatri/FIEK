#include <iostream>
#include <iomanip>

#define LENOVO 3
#define HP 4
#define DELL 7

using namespace std;

int main()
{
	char brendi;
	cout << "Zgjedhni nje nga brendet: L ose l - Lenovo, H ose h - HP dhe D ose d - Dell:";
	cin >> brendi;

	switch (brendi)
	{
	case 'l':
	case 'L':
		cout << "Keni zgjedhur Lenovo me sasi " << LENOVO << endl;
		if (LENOVO <= 3) {
			cout << "Ne pritje per furnizim" << endl;
		}
		break;
	case 'h':
	case 'H':
		cout << "Keni zgjedhur HP me sasi " << HP << endl;
		if (HP <= 3) {
			cout << "Ne pritje per furnizim" << endl;
		}
		break;
	case 'd':
	case 'D':
		cout << "Keni zgjedhur Dell me sasi " << DELL << endl;
		if (DELL <= 3) {
			cout << "Ne pritje per furnizim" << endl;
		}
		break;
	default:
		cout << "Brend i panjohur" << endl;
		break;
	}

	return 0;
}
