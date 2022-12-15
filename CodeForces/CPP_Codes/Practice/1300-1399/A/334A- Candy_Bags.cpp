#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l = 1, r = n * n;

    while(l < r) {
        while(l % (n / 2) != 0) {
            cout << l << " ";
            l++;
        }
        cout << l << " " << r << " ";
        l++;
        r--;
        while(r % (n / 2) != 0) {
            cout << r << " ";
            r--;
        }
        cout << endl;
    }
}