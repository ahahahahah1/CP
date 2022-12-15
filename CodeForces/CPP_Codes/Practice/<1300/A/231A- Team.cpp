#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, count, input;
    cin >> n;

    int implemented = 0;

    while(n--) {
        for(i = 0, count = 0; i < 3; i++) {
            cin >> input;
            count += input;
        }
        if(count > 1) {
            implemented++;
        }
    }

    cout << implemented;
    return 0;
}