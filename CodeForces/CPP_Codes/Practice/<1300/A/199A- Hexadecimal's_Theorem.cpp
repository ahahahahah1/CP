#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, n1, n2, n_temp, i, j, k, found = 0, flag = 0;
    cin >> n;
    vector<int> fib;

    fib.push_back(0);
    fib.push_back(1);
    n1 = 1;
    n2 = 0;

    while(n1 + n2 <= n) {
        fib.push_back(n1 + n2);
        n1 = n1 + n2;
        n2 = n1 - n2;
    }

    for(i = fib.size() - 1; i >= 0; i--) {
        for(j = i; j >= 0; j--) {
            for(k = j; k >=0; k--) {
                if(fib[i] + fib[j] + fib[k] == n) {
                    n1 = fib[i];
                    n2 = fib[j];
                    found = 1;
                    break;
                }
                if(fib[i] + fib[j] + fib[k] < n) {
                    flag = 1;
                    break;
                }
            }
            if(found || flag)
                break;
        }
        if(found || flag)
            break;
    }

    if(found)
        cout << (n - n1 - n2) << " " << n2 << " " << n1 << endl;
    if(flag)
        cout << "I'm too stupid to solve this problem" << endl;

    return 0;
}