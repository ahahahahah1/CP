#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int k, t, f, joy;
    long long int max_joy = LLONG_MIN;
    cin >> n >> k;

    while(n--) {
        cin >> f >> t;
        if(t > k) {
            joy = f - (t - k);
        }
        else {
            joy = f;
        }
        if(joy > max_joy) {
            max_joy = joy;
        }
    }

    cout << max_joy;

    return 0;
}