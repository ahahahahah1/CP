#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i, count = 0;
    char team = s[0];

    for(i =0; i < s.length(); i++) {
        if(s[i] == team)
            count++;
        else {
            team = s[i];
            count = 1;
        }

        if(count >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}