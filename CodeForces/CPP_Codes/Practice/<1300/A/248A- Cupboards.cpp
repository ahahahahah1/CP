#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l, r;
    int lOpen = 0, lClose = 0, rOpen = 0, rClose = 0;

    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        if(l)
            lClose++;
        else
            lOpen++;
        
        if(r)
            rClose++;
        else
            rOpen++;
    }

    int ans = 0;
    if(lOpen > lClose)
        ans += lClose;
    else
        ans += lOpen;

    if(rOpen > rClose)
        ans += rClose;
    else
        ans += rOpen;
    
    cout << ans;

}