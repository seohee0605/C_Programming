#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = N - i; j > 0; j--)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}


