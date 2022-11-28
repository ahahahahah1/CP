#include <stdio.h>

int main() {
    int t;
    long long int x0, n, temp;
    scanf("%d", &t);

    while(t--) {
        scanf("%lld %lld", &x0, &n);
        temp = 4 * (n/4) + 1;

        while(n - temp >= 0) {
            if(x0 & 1) {
                x0 = x0 + temp;
            }
            else {
                x0 = x0 - temp;
            }
            temp++;
        }
        printf("%lld\n", x0);
    }

    return 0;
}