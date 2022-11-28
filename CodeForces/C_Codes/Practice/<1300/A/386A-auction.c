#include <stdio.h>


int main() {

    int n;
    scanf("%d\n", &n);
    int max, s_max, idx, i, num;

    scanf("%d %d", &max, &s_max);

    if(s_max > max) {
        idx = 2;
        num = max;
        max = s_max;
        s_max = num;
    }

    else {
        idx = 1;
    }

    for(i = 3; i<=n; i++) {
        scanf("%d", &num);
        if(num > max) {
            s_max = max;
            max = num;
            idx = i;
        }
        else if(num < max && num > s_max) {
            s_max = num;
        }
    }

    printf("%d %d", idx, s_max);
    return 0;
}