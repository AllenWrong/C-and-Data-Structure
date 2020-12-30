/*
 * BubbleSort.c
 *
 *  Created on: 2020年12月29日
 *      Author: Andrew Guan
 */

#include <stdio.h>

void InsertSort(int A[], int n) {
	int i, j;

	// 采用带哨兵的方式
	for (i = 1; i < n; i++) {
		if (A[i] < A[i-1]) {
			int temp = A[i];
			for (j = i - 1; j >= 0 && A[j] > temp; j--) {
				A[j + 1] = A[j];
			}
			A[j + 1] = temp;
		}
	}
}

int main() {
	int a[] = {3,5,6,1,10,8,2,7,4};

	InsertSort(a, 9);

	int i;
	for (i = 0; i < 9; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

