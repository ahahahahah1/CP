#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sx, sy, ex, ey, req_x = 0, req_y = 0, flag = 1;
    char dir;
    cin >> t >> sx >> sy >> ex >> ey;
    int to_cover_x = abs(sx - ex);
    int to_cover_y = abs(sy - ey);

    for(int i = 1; i <= t; i++) {
        cin >> dir;
        if((dir == 'S' && ey < sy) || (dir == 'N' && ey > sy))
            req_y++;
        else if((dir == 'W' && ex < sx) || (dir == 'E' && ex > sx))
            req_x++;

        if(req_x >= to_cover_x && req_y >= to_cover_y) {
            cout << i << endl;
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "-1";
    return 0;
}