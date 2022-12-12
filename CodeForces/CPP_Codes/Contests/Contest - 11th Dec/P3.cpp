#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    int i, j, flag;
    int num;

    map<int, list<int>> M;
    
    
    cin >> t;

    while(t--) {
        flag = 0;
        cin >> n;
        for(i = 0; i < n; i++) {
            cin >> num;

            if(flag == 0) {
                for(j = 2; j <= num; j++) {
                    if(num % j == 0) {
                        auto l = M.find(j);
                        if(l != M.end() && i != 0) {
                            flag = 1;
                            break;
                        }
                        else { 
                            list<int> l1;
                            l1.push_back(num);
                            M.insert(pair <int, list<int>> (j, l1));
                        }
                        while(num % j == 0) 
                            num = num / j;
                    }
                }
            }
        }
        M.clear();

        if(flag == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}