#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n1 = 0, n2 = 0;
    cin >> s;

    for(auto c: s) {
        if(c >= 'a' && c <= 'z') n1++;
        else n2++;
    }

    if(n2 > n1) 
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout << s;
    return 0;
}