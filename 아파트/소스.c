#include<stdio.h>
#pragma warning(disable:4996)


int main() {
	int arr[10][10] = { 0 };
	int k;
	int count = 0;
	int* ptr;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		for (ptr = arr; ptr < arr + k;) {
			scanf("%d", &arr);

			if (arr == 1) {
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}
