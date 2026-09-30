#include <iostream>
using namespace std;

int partition(int values[], int beg, int end) {
	int pivot = values[end];
	int smaller = beg - 1;

	for (int current = beg; current < end; current++) {
		if (values[current] <= pivot) {
			smaller++;
			swap(values[smaller], values[current]);
		}
	}

	swap(values[smaller + 1], values[end]);
	return smaller + 1;
}

void quickSort(int values[], int beg, int end) {
	if (beg < end) {
		int pivotIndex = partition(values, beg, end);
		quickSort(values, beg, pivotIndex - 1);
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
