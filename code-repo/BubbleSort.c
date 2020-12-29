/*
 * BubbleSort.c
 *
 *  Created on: 2020年12月29日
 *      Author: Thingcor
 */

#include <stdio.h>

void BubbleSort(int A[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int flag = 0;
		for (j = n-1; j > i; j--) {
			if (A[j-1] > A[j]) {
				int temp = A[j-1];
				A[j-1] = A[j];
				A[j] = temp;
			}
		}
		if (flag == 0){
			return;
		}
	}
}

int main() {
	int a[] = {3,5,6,1,10,8,2,7,4};

	BubbleSort(a, 9);

	int i;
	for (i = 0; i < 9; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

