/*
 * BinarySearch.c
 *
 *  Created on: 2020年12月29日
 *      Author: Andrew Guan
 */

#include <stdio.h>

int BinarySearch(int a[], int length, int key) {
	int low = 0, high = length - 1, mid;
	mid = (low + high) / 2;

	while (low < high) {
		if (a[mid] == key) {
			return mid;
		}else if (a[mid] < key) {
			low = mid + 1;
		}else {
			high = mid - 1;
		}
	}

	return -1;
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
	int length = 9;
	BinarySearch(a, length, 10);
	BinarySearch(a, length, 9);
	return 0;
}
