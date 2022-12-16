#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int>> q;

int main() {
    int n, j, x, y, nums[n - 1], pow_2 = 2;
    string s;
    set<int> winning_nums;
    pair<int, int> p, l;

    cin >> n >> s;
    
    if(s[n - 1] == '0')
        q.push(make_pair(0, 1));
    else
        q.push(make_pair(1, 0));

    for(j = n - 2; j >= 0; j--) {
        nums[j] = pow_2 - 1;
        pow_2 *= 2;
    }

    for(j = n - 2; j >= 0; j--) {
        while(q.front().first + q.front().second == nums[j]) {

            p = q.front();
            q.pop();
            x = p.first;
            y = p.second;

            if(s[j] == '0') {
                for(int w = 0; w <= x; w++) {
                    l = make_pair(x + w, 2 * y + 1 + x - w);
                    q.push(l);
                }
            }
            else {
                for(int w = 0; w <= y; w++) {
                    q.push(make_pair((2 * x + 1) + (y - w), y + w));
                }
            }
        }
    }


    while(!q.empty()) {
        p = q.front();
        q.pop();
        cout << p.first << " " << p.second << endl;
        for(int i = p.first; i < p.first+p.second; i++) {
            winning_nums.insert(i + 1);
        }
    }

    for(auto it : winning_nums) {
        cout << it << " ";
    }

    return 0;
}