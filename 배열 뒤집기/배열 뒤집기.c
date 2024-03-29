#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	int arr[20];
	int a;
	int b;
	scanf("%d", &b);

	for (a = 0; a < b; a++)
	{
		scanf("%d", &arr[a]); 

	}
	for (a = b - 1; a >= 0; a--) {
		printf(" %d", arr[a]);
	}
	printf("\n");
	int mi[20], ma[20];
	int r = 0;
	for (int i = 0; i < b; ) {
		int max, min;
		min = arr[i];
		max = arr[i];
		for (int j = 0; j < 3 && i < b; j++) {
			
			if (j == 0 || arr[i] < min) {
				min = arr[i];
				
			}
		
			if (j == 0 || arr[i] > max) {
				max = arr[i];
				
			}
			
			i++;
			

		}
		mi[r] = min;
		ma[r] = max;
		r++;

		
	}
	for (int i = 0; i < r; i++) {
		printf(" %d", mi[i]);
	}
	printf("\n");
	for (int i = 0; i < r; i++) {
		printf(" %d", ma[i]);
	}


	return 0;
}