#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, query, permutation, vasya = 0, petya = 0;
    cin >> n;
    int query_array[n][2];

    for(int i = 0; i < n; i++) {
        cin >> permutation;
        query_array[permutation - 1][0] = i + 1;
        query_array[permutation - 1][1] = n - i;
    }

    cin >> m;
    while(m--) {
        cin >> query;
        vasya += query_array[query - 1][0];
        petya += query_array[query - 1][1];
    }

    cout << vasya << " " << petya << endl;

    return 0;
}