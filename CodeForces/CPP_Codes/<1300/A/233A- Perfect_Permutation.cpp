#include <bits/stdc++.h>
using namespace std;

//mistake regarding spaces

int main() {
    int n;
    cin >> n;

    if(n % 2) {
        cout << "-1";
    }
    else {
        for(int i = 1; i < n; i = i + 2) {
            cout << i+1 << " " << i << " ";
        }
    }

    return 0;
}