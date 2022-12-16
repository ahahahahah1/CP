#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, sum = 0;
    int even_min, odd_min;
    int even_count, odd_count;
    cin >> t;

    while(t--) {
        cin >> n;
        even_min = odd_min = INT_MAX;
        sum = 0;
        int arr[n];
        for(i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
        if(sum % 2 == 0) {
            printf("0\n");
        }
        else {
            for(i = 0; i < n; i++) {
                if(arr[i] % 2 == 0) {
                    even_count = 1;
                    while((arr[i] >> 1) % 2 != 1) {
                        arr[i] = arr[i] >> 1;
                        even_count++;
                        if(even_count == even_min)
                            break;
                    }
                    if(even_count < even_min)
                        even_min = even_count;
                }
                else {
                    odd_count = 1;
                    while((arr[i] >> 1) % 2 != 0) {
                        arr[i] = arr[i] >> 1;
                        odd_count++;
                        if(odd_count == odd_min)
                            break;
                    }
                    if(odd_count < odd_min)
                        odd_min = odd_count;
                }
            }
            even_min = (even_min < odd_min) ? even_min : odd_min;
            printf("%d\n", even_min);
        }
    }
}