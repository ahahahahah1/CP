#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int max = INT_MIN, min = INT_MAX, first, last;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            first = i;
        }
        if(arr[i] <= min) {
            min = arr[i];
            last = i + 1;
        }
    }

    if(first < last) {
        cout << first + (n - last);
    }
    else {
        cout << first + (n - last - 1);
    }


    return 0;
}