#include <bits/stdc++.h>

using namespace std;

int main() {
    int status[3][3] = {{1, 1, 1},
                        {1, 1, 1},
                        {1, 1, 1}};
    int toggle[5][5] = {0};

    int i, j, temp;

    for(i = 1; i < 4; i++) {
        for(j = 1; j < 4; j++) {
            cin >> toggle[i][j];
        }
    }

    for(i = 1; i < 4; i++) {
        for(j = 1; j < 4; j++) {
            temp = (toggle[i][j] + toggle[i - 1][j] + toggle[i + 1][j] + toggle[i][j - 1] + toggle[i][j + 1]) % 2;
            status[i - 1][j - 1] = (status[i - 1][j - 1] + temp) % 2;
        }
    }
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << status[i][j];
        }
        cout << "\n";
    }

    return 0;
}