#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "input size of array: ";
	cin >> size;

	print(convert(array, size));

	return 0;
}