#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "input size of array: ";
	cin >> size;
	init_random(array, size, 0, 100);

	print("befour sourting:\n");
	print(convert(array, size));

	sort_bubble(array, size);
	print("\n\nafter:\n");
	print(convert(array, size));


	sort_bubble(array, size);


	return 0;
}