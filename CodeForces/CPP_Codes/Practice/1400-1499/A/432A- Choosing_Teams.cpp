#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i, idx = 0;
    cin >> n >> k;

    int member[n];
    for(i = 0; i < n; i++)
        cin >> member[i];
    sort(member, member + n);

    for(i = 0; i < n; i++) {
        if(member[i] > 5 - k) {
            idx = i;
            break;
        }
    }
    if(i == n)
        idx = n;
    cout << idx / 3;
    return 0;
}