#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int one_round = (n * (n + 1)) / 2;

    m = m % one_round;

    for(int i = 1; i <=n; i++) {
        if(m - i >= 0) {
            m = m - i;
        }
        else
            break;
    }
    cout << m;
    return 0;
}