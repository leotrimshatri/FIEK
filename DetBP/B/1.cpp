//1.
//b) n = 3 => s = 4
//c) n = 6 => i = 7, s = 17
//d)
int main()
{
	int n;
	cout << "Jepni vleren per n: ";
	cin >> n;
	int shuma = 0;
	int i = 2;
	while (i <= n) {
		if (4 % i == 0) {
			i++;
			continue;
		}
		shuma += i + 1;
		i++;
	}
	cout << "Shuma: " << shuma << endl;
	return 0;
}
