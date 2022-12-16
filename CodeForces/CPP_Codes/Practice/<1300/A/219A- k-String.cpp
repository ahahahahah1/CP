#include <bits/stdc++.h>
using namespace std;

//missed writing a separate case for k = 1. This is quite an unnnecessarily complex way to solve this problem though.

int main() {
    string s;
    char c;
    int freq[26] = {0}, k;
    cin >> k >> s;

    if(k == 1) {
        cout << s;
        return 0;
    }

    for(int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    // for(int i = 0; i < 26; i++) {
    //     cout << freq[i] << " ";
    // }

    s = "";

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            if(freq[i] % k == 0) {
                while(freq[i] % k == 0) {
                    c = i + 'a';
                    s = s + c;
                    freq[i] /= k;
                }
            }
            else {
                s = "-1";
                break;
            }
        }
    }
    if(s == "-1") k = 1;
    while(k--)
        cout << s;

    return 0;
}