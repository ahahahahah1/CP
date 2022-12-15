#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num = 0;
    cin >> n;
    char prev, curr;

    cin >> prev;
    n--;

    while(n--) {
        cin >> curr;
        if(prev == curr)
            num++;
        prev = curr;
    }
    cout << num;

    return 0;
}