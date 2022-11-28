#include <stdio.h>

int main() {
    long int sum, partial_sum;
    int t, size, i, l, r, found;

    scanf("%d", &t);

    while(t--) {
        found = 0;
        sum = partial_sum = 0;
        l = r = 0;
        scanf("%d", &size);
        int arr[size];

        for(i=0; i<size; i++) {
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }
        for(i=2; i*i<sum && !found; i++) {
            if(sum%i == 0) {

            }
        }
    }

    return 0;
}