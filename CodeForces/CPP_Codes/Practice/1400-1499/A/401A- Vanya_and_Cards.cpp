#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n, x, num, sum = 0;
    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    sum = abs(sum);
    float f = (float) sum/x;
    cout << ceil(f);
    return 0;
}