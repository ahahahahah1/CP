#include <bits/stdc++.h>
using namespace std;

//Made a mistake that I didn't consider the case that n % sum == 0. Most of my mistakes floated around that case only and the
//fact that pages[i] could've been 0 for any i.

int main() {
    int n, sum = 0;
    int pages[7];

    cin >> n;
    for(int i = 0; i < 7; i++) {
        cin >> pages[i];
        sum += pages[i];
    }

    int num_weeks = floor(n / sum);

    n = n - num_weeks * sum;
    if(n == 0)
        n += sum;

    for(int i = 0; i < 7; i++) {
        n = n - pages[i];
        if(n <= 0) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}