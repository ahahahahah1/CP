#include <stdio.h>

int main() {
    int t,f, i;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &f);

        if(f == 3) {
            printf("-1");
        }
        else if(f == 5) {
            printf("5 4 1 2 3");
        }
        else if(f & 1) {
            i = f;
            while(i > 0) {
                if(i != f/2 + 1) {
                    printf("%d ", i);
                    i--;
                }
                else {
                    printf("%d %d ", i-1, i);
                    i = i - 2;
                }
            }
        }
        else {
            i = f;
            while(i > 0) {
                printf("%d ", i);
                i--;
            }
        }
        printf("\n");
    }
}