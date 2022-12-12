#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    char c;

    for(int i = 0; i < n; i++) {
        cin >> c;
        s[i] = tolower(s[i]);
        c = tolower(c);

        if(c == s[i]) {
            continue;
        }
        else if(c > s[i]) {
            cout << "-1";
            return 0;
        }
        else {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}