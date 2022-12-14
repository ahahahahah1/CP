#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos, n = s.length();
    while(n > 3) {
        while(s.substr(0, 3) == "WUB") {
            s = s.substr(3, n - 3);
            n = n - 3;
        }
        pos = s.find("W");
        while(s.substr(pos - 1, 3) == "WUB") {
            pos = s.find("W");
        }
            cout << s.substr(0, pos) << " ";
            s = s.substr(pos + 1);
            n = s.length();
    }

    return 0;
}