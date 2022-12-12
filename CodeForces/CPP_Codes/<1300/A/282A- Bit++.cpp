#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    string s;
    cin >> n;

    while(n--) {
        cin >> s;
        if(s.front() == '+' || s.back() == '+') {
            x++;
        }
        if(s.front() == '-' || s.back() == '-') {
            x--;
        }
    }
    cout << x;

    return 0;
}