#include <bits/stdc++.h>
using namespace std;

//extremely bad typos. Inside the if statement of the for loop, I reassigned id2 twice.

int main() {
    int n, min_diff, id1, id2, height1, height2, first_height;
    cin >> n;

    cin >> height1 >> height2;
    min_diff = abs(height2 - height1);
    id1 = 1;
    id2 = 2;

    first_height = height1;
    height1 = height2;

    for(int i = 3; i <= n; i++) {
        cin >> height2;
        if(abs(height2 - height1) < min_diff) {
            min_diff = abs(height2 - height1);
            id2 = i;
            id1 = i -1;
        }
        height1 = height2;
    }

    if(abs(height2 - first_height) < min_diff) {
        id2 = 1;
        id1 = n;
    }
    cout << id1 << " " << id2;
    return 0;
}