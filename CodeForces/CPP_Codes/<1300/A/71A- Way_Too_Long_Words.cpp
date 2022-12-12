#include <bits/stdc++.h>
using namespace std;

//wrote the code only for a single string input initially.


int main() {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;

        if(s.size() <= 10) {
            cout << s;
        }
        else {
            cout << s.front() << s.size()-2 << s.back();
        }
        cout << endl;
    }

    return 0;
}