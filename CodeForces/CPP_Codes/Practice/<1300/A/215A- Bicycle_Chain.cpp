#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, m, count = 0, max = INT_MIN;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    int b[m];
    for(i = 0; i < m; i++)
        cin >> b[i];
    
    for(i = 0; i < n; i++) {
        for(j = m - 1; j >=0; j--) {
            if(((float) b[j]/a[i]) == b[j]/a[i]) {
                if(b[j]/a[i] > max) {
                    max = b[j]/a[i];
                    count = 1;
                }
                else if(b[j]/a[i] == max) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}