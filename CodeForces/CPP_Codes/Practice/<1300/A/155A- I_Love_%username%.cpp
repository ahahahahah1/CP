#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int points, max, min;
    int ans = 0;

    cin >> points;
    n--;
    max = min = points;

    while(n--) {
        cin >> points;

        if(points > max) {
            max = points;
            ans++;
        }
        if(points < min) {
            min = points;
            ans++;
        }
    }

    cout << ans;


    return 0;
}