#include <stdio.h>

int dec(int *a, int start, int end) {
    for(int i=start; i<end; i++) {
        if(a[i] <= a[i+1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t, n;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        if(dec(a, 0, n - 1)) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
        
    }

    return 0;
}