#include <bits/stdc++.h>
using namespace std;

/* I spent around 30 minutes debugging this code. The mistake was that I had written cin >> x_cood[i], y_cood[i]*/

int main() {
    int n, points = 0;
    int x_max[2001], x_min[2001], y_max[2001], y_min[2001]; 
    for(int i = 0; i < 2001; i++) {
        x_max[i] = y_max[i] = INT_MIN;
        x_min[i] = y_min[i] = INT_MAX;
    }

    cin >> n;
    int x_cood[n], y_cood[n];
    for(int i = 0; i < n; i++) {
        cin >> x_cood[i] >>  y_cood[i];
        if(x_max[y_cood[i] + 1000] < x_cood[i])
            x_max[y_cood[i] + 1000] = x_cood[i];
        if(x_min[y_cood[i] + 1000] > x_cood[i])
            x_min[y_cood[i] + 1000] = x_cood[i];
        
        if(y_max[x_cood[i] + 1000] < y_cood[i])
            y_max[x_cood[i] + 1000] = y_cood[i];
        if(y_min[x_cood[i] + 1000] > y_cood[i])
            y_min[x_cood[i] + 1000] = y_cood[i];
    }
    
    while(n--) {
        if(x_cood[n] > x_min[y_cood[n] + 1000] && x_cood[n] < x_max[y_cood[n] + 1000]) {
            if(y_cood[n] > y_min[x_cood[n] + 1000] && y_cood[n] < y_max[x_cood[n] + 1000]) 
                points++;
        }
    }
    cout << points;

    return 0;
}