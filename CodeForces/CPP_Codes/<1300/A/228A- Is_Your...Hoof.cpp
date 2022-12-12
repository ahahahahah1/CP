#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> colors;
    int c;

    for(int i = 0; i < 4; i++) {
        cin >> c;
        colors.insert(c);
    }

    cout << 4 - colors.size();

    return 0;
}