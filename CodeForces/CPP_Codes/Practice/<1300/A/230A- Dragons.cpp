#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, i, j;
    cin >> s >> n;

    int strength[n], bonus[n];

    for(i = 0; i < n; i++) {
        cin >> strength[i] >> bonus[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strength[j] > strength[j + 1]) {
                swap(strength[j], strength[j + 1]);
                swap(bonus[j], bonus[j + 1]);
            }
        }
    }

    for(i = 0; i < n; i++) {
        if(s > strength[i])
            s = s + bonus[i];
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}