#include"..\task1\util.h"
int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size of array: ";

	cin >> size;

	init_random(array, size, 0, 100);

	print("Array before sorting: " + convert(array, size) + ".\n");

	print("Array after sorting: " + convert(array, size) + ".\n");

	return 0;
}