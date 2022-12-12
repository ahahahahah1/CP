#include <bits/stdc++.h>
using namespace std;


int main() {
    set<char> S;
    string username;
    cin >> username;

    for(char &c : username) {
        S.insert(c);
    } 

    if(S.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}