#include <bits/stdc++.h>
using namespace std;

/* an interestingly simple mistake in this problem. I am simply checking if the characters are equal. The 1st character of the string
can have appearances elsewhere in the string too and all of them would've been capitalized before.*/

int main() {
    string s;
    cin >> s;

    int i = 0;

    for(auto &c: s) {
        if(i == 0) {
            cout << (char) toupper(c);
            i = 1;
        }
        else
            cout << c;
    }

    return 0;
}