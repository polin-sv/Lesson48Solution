#include "util.h"

int main() {
	srand(time(NULL));

	int array[DEFAULT_SIZE];
	int size;

	cout << "input size of array: ";
	cin >> size;
	init_random(array, size, 0, 100);

	//print("befour sourting:\n");
	//print(convert(array, size));

	long long start = time(NULL);

	sort_bubble(array, size);

	long long finish = time(NULL);

	print(get_time(start, finish));

	//print("\n\nafter:\n");
	//print(convert(array, size))



	return 0;
}