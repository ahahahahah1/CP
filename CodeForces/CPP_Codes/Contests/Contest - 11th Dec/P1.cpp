#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, i, j;
    int max, min;
    int n1, n2, pairs;

    cin >> t;

    while(t--) {
        max = INT_MIN;
        min = INT_MAX;
        n1 = n2 = 0;

        cin >> n;
        int arr[n];
        
        for(i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        for(i = 0; i < n; i++) {
            if(arr[i] == max) n1++;
            if(arr[i] == min) n2++;
        }
        pairs = n1 * n2 * 2;
        cout << pairs << "\n";
    }

    return 0;
}