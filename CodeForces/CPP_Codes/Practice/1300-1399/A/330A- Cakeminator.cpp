#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int i, j, flag;

    char cake[r][c];
    vector<int> eat_row, eat_column;

    for(i = 0; i < r; i++) {
        flag = 1;
        for(j = 0; j < c; j++) {
            cin >> cake[i][j];

            if(cake[i][j] == 'S')
                flag = 0;
        }
        if(flag) {
            eat_row.push_back(i);
        }
    }

    for(j = 0; j < c; j++) {
        flag = 1;
        for(i = 0; i < r; i++) {
            if(cake[i][j] == 'S')
                flag = 0;
        }
        if(flag) {
            eat_column.push_back(j);
        }
    }

    cout << (c * eat_row.size() + r * eat_column.size()) - eat_column.size() * eat_row.size();
}