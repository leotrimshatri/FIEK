// a
void sort(int vargu[], int gjatesiaVargut) {
	int temp;

	for (int i = 0; i < gjatesiaVargut - 1; i++) {
		for (int j = i; j < gjatesiaVargut; j++)
		{
			if (vargu[i] > vargu[j]) {
				temp = vargu[i];
				vargu[i] = vargu[j];
				vargu[j] = temp;
			}
		}
	}

	for (int i = 0; i < gjatesiaVargut - 1; i++) {
		cout << vargu[i] << " ";
	}
	cout << endl;
}

// b
enum LlojiSortimit {
	RRITES,
	ZVOGELUES
};

// c
void sort(int vargu[], int gjatesiaVargut, LlojiSortimit l);
