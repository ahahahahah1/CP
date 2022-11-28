#include <stdio.h>


int main() {
    long long int n,k;

    scanf("%lld %lld", &n, &k);

    if(n & 1) { //n is odd
        if(k > n/2 + 1) { //some even number should be printed
            printf("%lld", 2*(k - (n/2 + 1)));
        } else { //some odd number should be printed
            printf("%lld", 2*k - 1);
        }
    } else { //n is even
        if(k > n/2) { //some even number should be printed
            printf("%lld", 2*(k - n/2));
        } else { //some odd number should be printed
            printf("%lld", 2*k - 1);
        }
    }

    return 0;
}