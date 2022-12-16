#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, x, min;
    float f;
    cin >> t;

    while(t--) {
        cin >> n;
        int arr[n];
        min = INT_MAX;

        for(i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        // cout << "\n\nmin = " << min << endl;

        cout << n << endl;
        for(i = 0; i < n; i++) {
            // cout << endl << "for arr[i] = " << arr[i] << ", ceil = " << ceil(arr[i]/min) << endl;
            f = (float) arr[i]/min;
            // cout << "for arr[i] = " << arr[i] << ", f = " << ceil(f) << endl;
            x = ceil(f) * min - arr[i];
            cout << i << " " << x << endl;
        }
    }
}