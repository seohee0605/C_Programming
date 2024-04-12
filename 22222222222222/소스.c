#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    int k, e, m;
    double a;
    scanf("%d %d %d", &k, &e, &m);
    a = (k + e + m) / 3;
    printf("%f", a);


    return 0;
}