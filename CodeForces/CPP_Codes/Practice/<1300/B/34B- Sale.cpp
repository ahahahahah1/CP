#include <bits/stdc++.h>
using namespace std;

//Used STL.

int main() {
    int n, m, price, profit = 0;
    multiset<int, greater<int>> buy;
    cin >> n >> m;

    buy.insert(0);

    for(int i = 0; i < n; i++) {
        cin >> price;
        if(price < 0) {
            if(buy.size() < m) {
                buy.insert(price);
            }
            else if(price < *buy.begin()) {
                buy.erase(buy.begin());
                buy.insert(price);
            }
        }
    }

    for(auto it : buy) {
        profit += it;
    }
    cout << abs(profit);

    return 0;
}