#include<stdio.h>
#pragma warning (disable:4996)
int main(void)
{

	int a, b;

	scanf("%d", &a);
	
	if (a == 1) {
		printf("**");
	}
	else {
		int k = a - 1;
		for (int i = 1; i <= a - 1; i++) {
			if (i == 1) {
				for (int j = 1; j <= a; j++) {
					printf("*");
				}
				for (int j = 1; j <= (a - 1) * 2 - 1; j++) {
					printf(" ");
				}
				for (int j = 1; j <= a; j++) {
					printf("*");
				}
			}
			else {
				for (int j = 1; j <= i - 1; j++) {
					printf(" ");
				}
				printf("*");
				for (int j = 1; j <= a - 2; j++) {
					printf(" ");

				}
				printf("*");
				b = (k - 1) * 2 - 1;
				for (int j = 1; j <= b; j++) {
					printf(" ");
				}
				printf("*");
				for (int j = 1; j <= a - 2; j++) {
					printf(" ");

				}
				printf("*");
				k--;
			}
			printf("\n");
		}
		for (int i = 1; i <= a - 1; i++) {
			printf(" ");
		}
		printf("*");
		for (int i = 1; i <= a - 2; i++) {
			printf(" ");
		}
		printf("*");
		for (int i = 1; i <= a - 2; i++) {
			printf(" ");
		}
		printf("*\n");
		//
		int m = 1;

		for (int i = a - 1; i > 1; i--) {
			for (int j = 1; j < i; j++) {
				printf(" ");
			}
			printf("*");
			for (int j = 1; j <= a - 2; j++) {
				printf(" ");
			}
			printf("*");
			//
			for (int j = 1; j <= m; j++) {
				printf(" ");
			}
			m += 2;
			printf("*");
			printf(" ");

			for (int j = 2; j <= a - 2; j++) {
				printf(" ");

			}
			printf("*\n");

		}
		for (int s = 1; k < a; s++) {
			if (s == 2 * a - 1) {
				for (int j = 1; j <= a; j++) {
					printf("*");
				}
				for (int j = 1; j <= (a - 1) * 2 - 1; j++) {
					printf(" ");
				}
				for (int j = 1; j <= a; j++) {
					printf("*");
				}
				break;
			}


		}

	}

	return 0;
}