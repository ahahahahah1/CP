#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int receiver[n], giver[n];

    for(int i = 0; i < n; i++) {
        cin >> receiver[i];
        giver[receiver[i] - 1] = i + 1;
    }
    for(int i = 0; i < n; i++) {
        cout << giver[i] << " ";
    }
}