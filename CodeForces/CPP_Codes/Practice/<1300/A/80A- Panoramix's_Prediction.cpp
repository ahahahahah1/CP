#include <bits/stdc++.h>
using namespace std;


int isPrime(int a) {
    for(int j = 2; j < a; j++) {
        if(a % j == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int i, j;
    for(i = n + 1; i <= m + 1; i++) {
        if(isPrime(i))
            break;
    }

    if(i == m)
        cout << "YES";
    else
        cout << "NO";
}