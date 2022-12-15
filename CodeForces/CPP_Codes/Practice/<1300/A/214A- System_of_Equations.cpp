#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, solutions = 0;
    cin >> n >> m;

    for(a = 0; a <= m; a++) {
        if(n - a * a < 0)
            break; 
        if(sqrt(m - a) == (n - a * a))
            solutions++;
    }
    cout << solutions;
    return 0;
}