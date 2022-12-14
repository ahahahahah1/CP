#include <bits/stdc++.h>
using namespace std;

//failed to notice the size of n. There is out of bounds error.

int main() {
    int n, digit, num_5s = 0, num_0s = 0;
    vector<int> largest_num;
    cin >> n;

    while(n--) {
        cin >> digit;
        if(digit == 5)
            num_5s++;
        else
            num_0s++;
    }
    
    if(num_0s) {
        num_5s = 9 * (num_5s / 9);

        if(num_5s) {
            while(num_5s--) {
                largest_num.push_back(5);
            }
            while(num_0s--) {
                largest_num.push_back(0);
            }
        }
        else {
            largest_num.push_back(0);
        }

        for(int i = 0; i < largest_num.size(); i++) {
            cout << largest_num[i];
        }
    }
    else {
        cout << "-1";
    }

    return 0;
}