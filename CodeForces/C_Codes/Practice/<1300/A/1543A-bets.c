#include <stdio.h>

long long int min(long long int x, long long int y) {
    return (x > y) ? y : x;
}

int main() {
    int t;
    long long int a, b;
    long long int gcd, moves ;

    scanf("%d", &t);
    while(t--) {
        scanf("%lld %lld", &a, &b);
    
        if(b > a) {
            long long int temp = a;
            a = b;
            b = temp;
        }
        //b is the smaller value

        if(b == a) {
            printf("0 0\n");
            continue;
        }
        else {
            gcd = a - b;

            if(a % gcd == 0) {
                moves = 0;
            }
            else {
                moves = min(a - (gcd * (a/gcd)), (gcd * (a/gcd + 1) - a));
            }
            printf("%lld %lld\n", gcd, moves);
        }
    }

    return 0;
}