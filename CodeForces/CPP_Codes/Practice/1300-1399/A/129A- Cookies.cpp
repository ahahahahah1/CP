#include <bits/stdc++.h>
using namespace std;

//there was a mistake initially. I hadn't initialized cookie_count.

int main() {
    int n, cookie_i, cookie_count = 0;
    vector<int> odd, even;
    cin >> n;
    
    while(n--) {
        cin >> cookie_i;
        cookie_count += cookie_i;

        if(cookie_i % 2)
            odd.push_back(cookie_i);
        else
            even.push_back(cookie_i);
    }

    if(cookie_count % 2)
        cout << odd.size();
    else
        cout << even.size();
    
    return 0;
}   