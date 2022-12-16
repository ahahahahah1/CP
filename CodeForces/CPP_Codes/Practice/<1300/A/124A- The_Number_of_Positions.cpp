#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> n >> a >> b;
    cout << (((n - a) > (b + 1)) ? (b + 1) : (n - a)) << endl;
    return 0;
}