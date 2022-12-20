#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t >> s;

    while(t--) {
        // cout << t << endl;
        for(int i = n - 1; i > 0; i--) {
            if(s[i] == 'G' && s[i - 1] == 'B') {
                s[i] = 'B';
                s[i - 1] = 'G';
                i--;
            }
        }
        // cout << s << endl;
    }
    cout << s;
    return 0;
}