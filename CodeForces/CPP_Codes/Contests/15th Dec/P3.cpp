#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i, j, n, prev_1, prev_0;
    string s;
    char x;

    cin >> t;

    int num, total_num, flexible_spots, num_1s, num_0s;

    while(t--) {
        cin >> n;

        // cout << "given s is " << s << endl;

        // int freq[n] = {0};
        prev_1 = prev_0 = -1;
        flexible_spots = num_1s = num_0s = 0;
        num = total_num = 1;

        cout << "\n\n";

        for(i = 0; i < n; i++) {
            cin >> x;
            if(x == '0')
                num_0s++;
            else
                num_1s++;

            cout << "just after scanning, num_1s and num_0s are " << num_1s << " " << num_0s << endl;

            if(i) {
                if(x == '0') {
                    if(num_0s == (i + 3) / 2) {
                        flexible_spots++;
                    }
                    else {
                        flexible_spots = 0;
                        num_0s++;
                    }
                }
                else {
                    if(num_1s == (i + 3) / 2) {
                        flexible_spots++;
                    }
                    else {
                        flexible_spots = 0;
                        num_1s++;
                    }
                }
                cout << "For i = " << i << ", flexible spots are " << flexible_spots << endl;
                for(j = 0; j < flexible_spots; j++) {
                    num = (num * 2) % 998244353;
                }
                total_num = (total_num + num) % 998244353;
            }
            cout << "after viewing the " << i << "th character, total_num is " << total_num << endl;
            cout << "After computation, Num_1s and Num_0s are " << num_1s << " " << num_0s << endl;
        }

        // for(i = 0; i < n; i++) {
        //     if(s[i] == '0') {
        //         if(prev_0 == -1) {
        //             freq[i] = 1;
        //         }
        //         else {
        //             freq[i] = freq[prev_0] + 1;
        //         }
        //         prev_0 = i;
        //     }
        //     else {
        //         if(prev_1 == -1) {
        //             freq[i] = 1;
        //         }
        //         else {
        //             freq[i] = freq[prev_1] + 1;
        //         }
        //         prev_1 = i;
        //     }
        // }

        // cout << "\n\nn = " << n << " and s = " << s << endl;
        // for(i = 0; i < n; i++) {
        //     //first we will find number of flexible spots
        //     if(freq[i] == i + 1) { //i + 1 = m
        //         flexible_spots++;
        //     }
        //     else {
        //         flexible_spots = 0;
        //     }
        //     cout << "For i = " << i << " flexible spots are " << flexible_spots << endl;
        //     for(j = 0; j < flexible_spots; j++) {
        //         num = (num * 2) % 998244353;
        //     }
        //     total_num = (total_num + num) % 998244353; 
        // }

        cout << total_num << endl;
    }
}