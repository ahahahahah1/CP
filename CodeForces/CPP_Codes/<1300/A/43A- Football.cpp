#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, goals1 = 0, goals2 = 0;
    cin >> n;

    string team, team1, team2 = "\0";

    cin >> team1;
    goals1++;

    while(--n) {
        cin >> team;
        if(team != team1) {
            team2 = team;
        }
        if(team == team2) {
            goals2++;
        }
        else {
            goals1++;
        }
    }

    if(goals1 > goals2)
        cout << team1;
    else
        cout << team2;
    return 0;
}