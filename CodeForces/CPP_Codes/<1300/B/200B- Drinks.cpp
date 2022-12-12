#include <bits/stdc++.h>
using namespace std;

//error in the data type of the final answer

int main() {
    int n;
    cin >> n;

    int pi;
    float ans;

    for(int i = 0; i < n; i++) {
        cin >> pi;
        ans += pi;
    }
    ans /= n;

    cout << ans;


    return 0;
}