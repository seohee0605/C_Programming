#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    int n1, n2, n3;
    int max, min;
    double avr;
    scanf("%d %d %d", &n1, &n2, &n3);
    avr = (double)(n1 + n2 + n3) / 3;
    if (avr >= 90) {
        printf("A\n");
    }
    else if (avr >= 80) {
        printf("B\n");
    }
    else if (avr >= 70) {
        printf("C\n");
    }
    else if (avr >= 60) {
        printf("D\n");
    }
    else {
        printf("F\n");
    }

    if (n1 >= n2 && n1 >= n3) {
        max = n1;
        if (n2 < n3) {
            min = n2;
        }
        else if (n3 < n2) {
            min = n3;
        }
    }
    else if (n2 >= n1 && n2 >= n3) {
        max = n2;
        if (n1 < n3) {
            min = n1;
        }
        else if (n3 < n1) {
            min = n3;
        }
    }
    else {
        max = n3;
        if (n2 < n1) {
            min = n2;
        }
        else if (n1 < n2) {
            min = n1;
        }
    }
    printf("max: %d\n", max);
    printf("min: %d", min);

    return 0;
}