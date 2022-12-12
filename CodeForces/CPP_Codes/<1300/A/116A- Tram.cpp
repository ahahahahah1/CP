#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b, capacity, curr;
    cin >> a >> b;
    capacity = curr = b;

    while(--n) {
        cin >> a >> b;
        curr = curr - a + b;
        if(curr > capacity)
            capacity = curr;
    }

    cout << capacity;

    return 0;
}