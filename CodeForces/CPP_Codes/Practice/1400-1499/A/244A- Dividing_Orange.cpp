#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i, j, preference;
    cin >> n >> k;

    int taken[n * k] = {0};
    int children[k][n];

    for(i = 0; i < k; i++) {
        cin >> preference;
        taken[preference - 1] = 1;
        children[i][0] = preference;
    }

    int counter = 0;

    for(i = 0; i < k; i++) {
        for(j = 1; j < n; j++) {
            while(taken[counter])
                counter++;
            children[i][j] = counter + 1;
            taken[counter] = 1;
            counter++;
        }
    }

    for(i = 0; i < k; i++) {
        for(j = 0; j < n; j++) {
            cout << children[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}