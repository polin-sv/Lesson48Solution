#include "logic.h"

void sort_bubble(int array[], int length) {
	
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (array[j] > array[j + 1]) {
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
	
	
}