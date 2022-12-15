#include <bits/stdc++.h>
using namespace std;

//sleepiness. Should've written a2 / b == a3 / l. Wrote a2 % b == a3 % l.

int main() {
    int a1, a2, a3;
    int l, b, h;

    cin >> a1 >> a2 >> a3;

    for(l = 1; l <= a1; l++) {
        if(a1 % l == 0) {
            b = a1 / l;
            if(a2 % b == 0 && a3 % l == 0) {
                if(a2 / b == a3 / l) {
                    h = a2 / b;
                    break;
                }
            }
        }
    }
    cout << 4 * (l + b + h);
    return 0;
}