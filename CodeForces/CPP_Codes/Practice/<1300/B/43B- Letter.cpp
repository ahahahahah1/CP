#include <bits/stdc++.h>
using namespace std;

void checkNegative(int freq[]) {
    for(int i = 0; i < 52; i++) {
        if(freq[i] < 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    return;
}

int main() {
    char ch;
    int freq[52] = {0}; //0-25 : lowercase, 26-51 : uppercase
    
    cin >> ch;
    while(ch != '\n') {
        cout << ch << endl;
        // if(ch <= 'z' && ch >= 'a')
        //     freq[ch - 'a']++;
        // if(ch <= 'Z' && ch >= 'A')
        //     freq[ch - 'A' + 26]++;
        cin >> ch;
    }
    
    cin >> ch;
    // while(ch != '\n') {
    //     if(ch <= 'z' && ch >= 'a')
    //         freq[ch - 'a']--;
    //     if(ch <= 'Z' && ch >= 'A')
    //         freq[ch - 'A' + 26]--;
    //     cin >> ch;
    // }

    // checkNegative(freq);
    return 0;
}