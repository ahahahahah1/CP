#include <bits/stdc++.h>
using namespace std;

//good problem for me. With the code that I had written, there was a problem with the short-circuiting of conditions

int main() {
    int n, m, i, j, eaten = 0;
    cin >> n >> m;

    char grid[n][m];

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(grid[i][j] == 'W') {
                if(i == 0) { //top edge
                    if(j == 0) {
                        if((grid[i + 1][j] == 'P' || grid[i][j + 1] == 'P')) //top right corner
                            eaten++;
                        }
                    else if(j == m - 1) {
                        if((grid[i + 1][j] == 'P' || grid[i][j - 1] == 'P')) //top left corner
                            eaten++;
                    }
                    else {
                        if(grid[i + 1][j] == 'P' || grid[i][j - 1] == 'P' || grid[i][j + 1] == 'P') //non-corner edge
                            eaten++;
                    }
                }
                else if(i == n - 1) { //bottom edge
                    if(j == 0) {
                        if((grid[i - 1][j] == 'P' || grid[i][j + 1] == 'P')) //bottom left corner
                        eaten++;
                    }
                    else if(j == m - 1) {
                        if((grid[i - 1][j] == 'P' || grid[i][j - 1] == 'P')) //bottom right corner
                            eaten++;
                    }
                    else {
                        if(grid[i - 1][j] == 'P' || grid[i][j - 1] == 'P' || grid[i][j + 1] == 'P') //non-corner edge
                        eaten++;
                    }
                }
                else if(j == 0) { //left edge, corners have already been checked
                    if(grid[i - 1][j] == 'P' || grid[i + 1][j] == 'P' || grid[i][j + 1] == 'P') //non-corner edges
                        eaten++;
                }
                else if(j == m - 1) { //right edge, corners have already been checked
                    if(grid[i - 1][j] == 'P' || grid[i + 1][j] == 'P' || grid[i][j - 1] == 'P') //non-corner edges
                        eaten++;
                }
                else { //central cells
                    if(grid[i - 1][j] == 'P' || grid[i + 1][j] == 'P' || grid[i][j - 1] == 'P' || grid[i][j + 1] == 'P')
                        eaten++;
                }
            }
        }
    }
    cout << eaten;
    return 0;
}