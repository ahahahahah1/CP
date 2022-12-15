#include <bits/stdc++.h>
using namespace std;

//wrote the wrong spelling of Rozdil :(

int main() {
    int n, time, min_time, town_number, flag;
    cin >> n;

    cin >> min_time;
    town_number = 1;
    flag = 1;

    for(int i = 1; i < n; i++) {
        cin >> time;
        if(time < min_time) {
            flag = 1;
            town_number = i + 1;
            min_time = time;
        }
        else if(time == min_time) {
            flag = 0;
        }
    }

    if(flag)
        cout << town_number;
    else
        cout << "Still Rozdil";
    
    return 0;
}