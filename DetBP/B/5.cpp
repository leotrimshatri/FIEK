int faktorieli(int n) {
	int f = 1;

	for (int i = 1; i <= 3 * n - 1; i++) {
		f *= i;
	}

	return f;
}

int prodhimi(int n) {
	int p = 1;
	for (int i = 1; i <= n; i++) {
		p *= 2 * i + 3;
	}

	return p;
}

int main()
{
	
	int rezultati = faktorieli(2) + 2 * prodhimi(2);

	cout << rezultati << endl;
	return 0;
}
