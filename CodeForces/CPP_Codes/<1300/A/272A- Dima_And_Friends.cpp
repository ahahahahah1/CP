#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >> n;

    if(n == 1) { 
        cin >> num;
        cout << 2 + (num % 2);
    }
    else if(n == 4) {
        cout << "4";
    }
    else {
        for(int i = 0; i < n; i++) {
            cin >> num;
            sum += num;
        }
        if(n == 2) {
            if(sum % 3 == 1) 
                cout << "4" << endl;
            else
                cout << "3" << endl;
        }
        else if(n == 3) {
            if(sum % 4 == 0)
                cout << "3" << endl;
            else
                cout << "4" << endl;
        }
        else 
            if(sum % (n + 1) > (n - 4) || sum % (n + 1) == 0) 
                cout << "4" << endl;
            else 
                cout << "5" << endl;

    }


    return 0;
}