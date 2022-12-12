#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;
    vector<int> result;
    
    string s;
    
    cin >> s;
    for(auto ch : s) {
        a.push_back((int) ch - 48);
    }

    cin >> s;
    for(auto ch : s) {
        b.push_back((int) ch - 48);
    }

    
    
    return 0;
}