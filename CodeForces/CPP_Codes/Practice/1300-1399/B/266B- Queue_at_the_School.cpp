#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    int i, j, k;
    cin >> n >> t;

    string s;
    cin >> s;

    for(i = n - 1, j = 0; i >=0; i--) {
        if(s[i] == 'B') {
            k = 0;
            while(i + j + 1 < n && j <= t && s[i + k + 1] == 'G') {
                s[i + k] = 'G';
                s[i + k + 1] = 'B';
                k++; j++;
            }
        }
        if(j > 1)
            j--;

        if(i == 1 || i == 2)
            cout << "For i = " << i << ", the string now is " << s << " and j = " << j << endl;
    }

    cout << s;

    return 0;
}