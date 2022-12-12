#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int input[26] = {0}, jumbled[26] = {0};

    cin >> str;
    for(char &c : str) {
        input[c - 'A']++;
    }

    cin >> str;
    for(char &c : str) {
        input[c - 'A']++;
    }
    
    cin >> str;
    for(char &c : str) {
        jumbled[c - 'A']++;
    }

    for(int i = 0; i < 26; i++) {
        if(jumbled[i] != input[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}