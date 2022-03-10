1b. n = 4 => shuma = 13
1c. n = 7 => shuma = 13, i = 4
1d. 
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Jepni vleren per n: ";
	cin >> n;
	int shuma = 0, i = 2;
	while (i <= n) {
		if (i + 1 > 4) {
			break;
		}
		shuma += 3 * i - 1;
		i++;
	}
	cout << "Shuma: " << shuma << endl;
	return 0;
}
