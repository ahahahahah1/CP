#include <bits/stdc++.h>
using namespace std;

int magic(int n, int count) {
    if(count > 2) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    if(n % 10 == 4) {
        return magic(n / 10, count + 1);
    }
    if(n % 10 == 1) {
        return magic(n / 10, 0);
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    cin >> n;

    if(magic(n, 0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}