#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	
	printf("%d", count);
	if (count % 2 == 0) {
		do {
			printf("%d", n % 10);
			n = n / 10;
		} while (n);

	}
	return 0;
}