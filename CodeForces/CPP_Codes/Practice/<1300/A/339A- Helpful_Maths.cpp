#include <bits/stdc++.h>
using namespace std;

/*Quite a rookie mistake. Didn't take into account cases where the largest occuring number is 1 or 2 in the expression */

int main() {
    string s;
    cin >> s;
    int count[3] = {0};

    for(char &c: s) {
        if(c == '1')
            count[0]++;
        else if(c == '2')
            count[1]++;
        else if(c == '3')
            count[2]++;
    }
    
    if(count[0]) {
        cout << "1";
        count[0]--;
    }
    else if(count[1]) {
        cout << "2";
        count[1]--;
    }
    else if(count[2]) {
        cout << "3";
        count[2]--;
    }

    for(int i = 0; i < 3; i++) {
        while(count[i]) {
            cout << "+";
            count[i]--;
            cout << i + 1;
            
        }
    }

    return 0;
}