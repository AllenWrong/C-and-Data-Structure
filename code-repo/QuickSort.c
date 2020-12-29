/*
 * QuickSort.c
 *
 *  Created on: 2020年12月29日
 *      Author: Andrew Guan
 */
#include <stdio.h>

int Partition(int a[], int low, int high);
void QuickSort(int a[], int low, int high);

void QuickSort(int a[], int low, int high) {
	if (low < high) {
		int pivotpos = Partition(a, low, high);
		QuickSort(a, low, pivotpos - 1);
		QuickSort(a, pivotpos + 1, high);
	}
}

int Partition(int a[], int low, int high) {
	int pivot = a[low];
	while(low < high) {
		while(low < high && a[high] >= pivot) --high;
		a[low] = a[high];
		while(low < high && a[low] <= pivot) ++low;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}

int main() {
	int a[] = {3,5,6,1,10,8,2,7,4};

	QuickSort(a, 0, 8);

	int i;
	for (i = 0; i < 9; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
