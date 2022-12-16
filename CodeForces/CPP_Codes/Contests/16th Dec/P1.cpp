#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x[3], y[3];
    cin >> t;

    while(t--) {
        cin >> x[0] >> y[0];
        cin >> x[1] >> y[1];
        cin >> x[2] >> y[2];
        
        if((x[0] == x[2] && y[0] == y[1]) || (x[0] == x[1] && y[0] == y[2]))
            cout << "NO\n";
        else if((x[1] == x[2] && y[1] == y[0]) || (x[1] == x[0] && y[1] == y[2]))
            cout << "NO\n";
        else if((x[2] == x[0] && y[2] == y[1]) || (x[2] == x[1] && y[2] == y[0]))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}