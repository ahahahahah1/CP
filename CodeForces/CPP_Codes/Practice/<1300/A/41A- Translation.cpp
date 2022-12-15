#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int n = s.length();

    for(int i = 0; i < n; i++) {
        if(s[i] != t[n - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}