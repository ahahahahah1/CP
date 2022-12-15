#include <bits/stdc++.h>
using namespace std;

//what if beauty[n - 1] and beauty[0] are actually the same?

int main() {
    int n, max_beauty_diff;
    long long int c1, c2;
    cin >> n;

    int beauty[n];

    for(int i = 0; i < n; i++)
        cin >> beauty[i];
    
    sort(beauty, beauty + n);

    max_beauty_diff = beauty[n - 1] - beauty[0];
    c1 = count(beauty, beauty + n, beauty[0]);
    c2 = count(beauty, beauty + n, beauty[n - 1]);

    if(max_beauty_diff) {
        cout << max_beauty_diff << " " << c1 * c2;
    }
    else {
        cout << max_beauty_diff << " " << (c1 * (c1 - 1)) / 2;
    }
    return 0;
}