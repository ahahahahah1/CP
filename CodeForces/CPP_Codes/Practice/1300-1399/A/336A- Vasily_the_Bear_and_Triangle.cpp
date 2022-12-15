#include <bits/stdc++.h>
using namespace std;

//didn't read the condition x1 < x2.

int main() {
    int x, y;
    cin >> x >> y;

    if(x > 0 && y > 0) {
        cout << "0 " <<  x + y << " " << x + y << " 0";
    }
    else if(x < 0 && y > 0) {
        x = abs(x);
        cout << -(x + y) << " 0 0 " << x + y;
    }
    else if(x < 0 && y < 0) {
        cout << x + y << " 0 0 " << x + y;
    }
    else {
        y = abs(y);
        cout << "0 " << -(x + y) << " " << (x + y) << " 0";
    }
    return 0;
}