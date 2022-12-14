#include <bits/stdc++.h>
using namespace std;

//didn't read the entire problem :(

int main() {
    int k, growth[12], sum = 0, i = 0;
    cin >> k;

    for(i = 0; i < 12; i++)
        cin >> growth[i];
    
    sort(growth, growth+12, greater<int>());

    i = 0;
    while(sum < k && i < 12) {
        sum += growth[i];
        i++;
    }
    if(sum < k) cout << "-1";
    else cout << i;
    return 0;
}