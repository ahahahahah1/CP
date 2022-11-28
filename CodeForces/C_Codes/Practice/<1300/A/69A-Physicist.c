#include <stdio.h>


int main() {
    int t;
    int x=0, y=0, z=0;
    int temp1, temp2, temp3;

    scanf("%d\n", &t);

    while(t--) {
        scanf("%d %d %d", &temp1, &temp2, &temp3);
        x += temp1;
        y += temp2;
        z += temp3;
    }

    if(x == 0 && y == 0 && z == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}