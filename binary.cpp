#include <iostream>
using namespace std;

int binarySearch(int values[], int target, int beg, int end) {
	if (beg > end) {
		return -1;
	}

	int middle = beg + (end - beg) / 2;
	if (values[middle] == target) {
		return middle;
	}
	if (target < values[middle]) {
		return binarySearch(values, target, beg, middle - 1);
	}
	return binarySearch(values, target, middle + 1, end);
}

int main() {
	int values[] = {2, 5, 8, 12, 16, 23, 38, 56};
	int target = 23;

	int size = sizeof(values) / sizeof(values[0]);
	int index = binarySearch(values, target, 0, size - 1);
	if (index == -1) {
		cout << "Value not found\n";
	} else {
		cout << "Value found at index " << index << '\n';
	}
	return 0;
}
