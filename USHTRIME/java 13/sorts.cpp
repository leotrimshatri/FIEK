/*	
	Detyra 1 - Kërkimi sekuencial
*/
int sequential_search(vector<int> nums, int value) {
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		count++;
		if (nums.at(i) == value) {
			cout << "Numri i krahasimeve: " << count << endl;
			return i;
		}
	}

	cout << "Numri i krahasimeve: " << count << endl;
	return -1;
}

/*
	Detyra 2 - Kërkimi sekuencial i optimizuar
*/
int linear_search(vector<int> &nums ,int value) {
	int count = 0;
	int temp;
	for (int i = 0; i < nums.size(); i++) {
		count++;
		if (nums[i] == value) {
			cout << "Numri i krahasimeve: " << count << endl;
			temp = nums[i];
			nums[i] = nums[i-1];
			nums[i - 1] = temp;
			return i-1;
		}
		
	}

	cout << "Numri i krahasimeve: " << count << endl;
	return -1;
}

/*	
	Detyra 3 - Kërkimi binar
*/
int binarySearch(vector<int> vectValues, int value) {
	int nr = 0;
	int left = 0, right = vectValues.size() - 1;
	while (left <= right) {
		nr++;
		int mid = left + (right - left) / 2;
		if (vectValues.at(mid) == value) {
			cout << nr << endl;
			return mid;
		}

		if (vectValues.at(mid) > value) {
			right = mid - 1;
		}

		else {
			left = mid + 1;
		}
	}

	return -1;
}

/*
	Detyra 4 - Kërkimi binar me rekursion
*/
int binarySearchRecursion(vector<int> vectValues, int start, int end, int value) {
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (vectValues.at(mid) == value) {
			return mid;
		}

		if (vectValues.at(mid) > value) {
			return binarySearchRecursion(vectValues, start, end - 1, value);
		}

		else {
			return binarySearchRecursion(vectValues, mid + 1, end, value);
		}
	}

	return -1;
}

/*
	Detyra 5 - Vlera n-të maksimale
*/
int maxNthValue(vector<int> vect, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < vect.size(); j++)
		{
			if (vect.at(i) < vect.at(j)) {
				int temp = vect.at(i);
				vect.at(i) = vect.at(j);
				vect.at(j) = temp;
			}
		}
	}

	return vect.at(n - 1);
}


/*
	Detyra 6 - Bubble sort
*/
void bubbleSort(vector<int>& vect) {
	bool hasSwap = true;
	while (hasSwap) {
		hasSwap = false;
		for (int i = 0; i < vect.size() - 1; i++)
		{
			if (vect.at(i) > vect.at(i + 1)) {
				int temp = vect.at(i + 1);
				vect.at(i + 1) = vect.at(i);
				vect.at(i) = temp;
				hasSwap = true;
			}
		}
	}
}

/*
	Detyra 7 - Selection sort
*/
void selectionSort(vector<int>& vect) {
	int minIndex = -1;
	int temp;
	for (int i = 0; i < vect.size() - 1; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < vect.size(); j++)
		{
			if (vect.at(j) < vect.at(minIndex)) {
				minIndex = j;
			}
		}

		temp = vect.at(i);
		vect.at(i) = vect.at(minIndex);
		vect.at(minIndex) = temp;
	}
}

/*
	Detyra 8 - Insertion sort
*/
void insertionSort(vector<int>& vect) {
	int key;

	for (int i = 1; i < vect.size(); i++)
	{
		key = vect.at(i);
		int j = i - 1;

		while (j >= 0 && vect.at(j) > key) {
			vect.at(j + 1) = vect.at(j);
			j--;
		}

		vect.at(j + 1) = key;
	}
}
