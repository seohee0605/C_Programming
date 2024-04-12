#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    int y1, y2, m1, m2, d1, d2;
    int y, m, d;
    scanf("%d/%d/%d", &y1, &m1, &d1);
    scanf("%d/%d/%d", &y2, &m2, &d2);

    if (y1 > y2) {
        y = y2; 
        m = m2; 
        d = d2;
    }
    else if( y1 < y2) {
        y = y1;
        m = m1;
        d = d1;
    }
    else if (y1 == y2) {
        if (m1 > m2) {
            y = y2;
            m = m2;
            d = d2;
        }
        else if (m1 < m2) {
            y = y1;
            m = m1;
            d = d1;
        }
        else if (m1 == m2) {
            if (d1 > d2) {
                y = y2;
                m = m2;
                d = d2;
            }
            else if (d1 < d2) {
                y = y1;
                m = m1;
                d = d1;
            }
            else {
                printf("%d/%d/%d*", y1, m1, d1);
            }
        }
       
    }
    printf("%d/%d/%d", y, m, d);
    return 0;
}