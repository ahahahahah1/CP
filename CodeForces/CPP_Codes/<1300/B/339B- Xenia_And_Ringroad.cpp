#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, curr_house = 1, next_house;
    long long int time = 0;
    
    cin >> n >> m;
    
    while(m--) {
        cin >> next_house;

        if(next_house >= curr_house) {
            time += next_house - curr_house;
        }
        else {
            time += n - curr_house + next_house;
        }

        curr_house = next_house;
    }

    cout << time;
    return 0;
}