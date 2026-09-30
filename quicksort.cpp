#include <iostream>
using namespace std;

int partition(int values[], int beg, int end) {
	int pivot = values[beg + (end - beg) / 2];
	int smaller = beg;
	int larger = end;

	while (true) {
		while (values[smaller] < pivot) {
			smaller++;
		}
		while (values[larger] > pivot) {
			larger--;
		}
		if (smaller >= larger) {
			return larger;
		}
		swap(values[smaller], values[larger]);
		smaller++;
		larger--;
	}
}

void quickSort(int values[], int beg, int end) {
	if (beg < end) {
		int pivotIndex = partition(values, beg, end);
		quickSort(values, beg, pivotIndex);
		quickSort(values, pivotIndex + 1, end);
	}
}

int main() {
	int values[] = {10, 7, 8, 9, 1, 5};
	int size = sizeof(values) / sizeof(values[0]);

	quickSort(values, 0, size - 1);

	for (int i = 0; i < size; i++) {
		cout << values[i] << ' ';
	}
	cout << '\n';
	return 0;
}
