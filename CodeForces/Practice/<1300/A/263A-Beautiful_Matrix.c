#include <stdio.h>
#include <stdlib.h>


int main() {
    int x, n;

    scanf("%d", &x);
    n = 0;

    while(x == 0) {
        scanf("%d", &x);
        n++;
    }
    int row = n/5;
    int column = n%5;

    printf("%d\n", (abs(row - 2) + abs(column - 2)));

    return 0;
}