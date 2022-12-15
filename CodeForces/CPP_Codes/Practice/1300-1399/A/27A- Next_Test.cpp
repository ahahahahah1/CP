#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tests[3000] = {0}, x, i;
    cin >> n;

    while(n--) {
        cin >> x;
        tests[x - 1]++;
    }

    for(i = 0; i < 3000; i++) {
        if(!tests[i]) {
            cout << i + 1;
            break;
        }
    }
    if(i == 3000)
        cout << i + 1;
    return 0;
}