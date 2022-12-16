#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i;
    cin >> t;

    while(t--) {
        cin >> n;
        int towers[n];

        for(i = 0; i < n; i++)
            cin >> towers[i];
        sort(towers + 1, towers + n);

        for(i = 1; i < n; i++) {
            while(towers[0] < towers[i]) {
                towers[0]++;
                towers[i]--;
            }
        }

        cout << towers[0] << endl;
    }

    return 0;
}