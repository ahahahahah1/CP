#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int permu[n], fixed = 0, pair_swap = 0;

    for(int i = 0; i < n; i++) {
        cin >> permu[i];
        if(i == permu[i]) {
            fixed++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(i == permu[permu[i]] && i != permu[i]) {
            pair_swap++;
            break;
        }
    }
    if(fixed != n) {
        if(pair_swap)
            cout << fixed + 2;
        else
            cout << fixed + 1;
    }
    else {
        cout << n;
    }
    return 0;
}