#include <stdio.h>


int checkUniqueDigits(int *a) {
    if((a[0] != a[1]) && (a[0] != a[2]) && (a[0] != a[3]) && (a[1] != a[2]) && (a[1] != a[3]) && (a[2] != a[3])) {
        return 1;
    }
    return 0;
}

void increment(int *a) {
    int i = 3;
    a[i]++;
    while(i >= 0 && a[i] == 10) {
        a[i] = 0;
        i--;
        a[i]++;

    }
}

int main() {
    int i=3,j,k,y;
    int flag;
    int a[4];

    scanf("%d", &y);

    while(y != 0) {
        a[i] = y%10;
        i--;
        y/= 10;
    }
    increment(a);

    while(!checkUniqueDigits(a)) {
        increment(a);
    }

    for(i=0; i<4; i++) {
        printf("%d", a[i]);
    }

    return 0;
}