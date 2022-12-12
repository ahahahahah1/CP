#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b, int c) {
    if(a < b) {
        return (a < c) ? a : c;
    }
    else {
        return (b < c) ? b : c;
    }
}

int main() {
    int n, k, l, c, d, p, nl, np;
    //we have k * l mL of the drink. For each toast we need n * nl mL of the drink
    //we have c * d slices of lime. For each toast, we need n slices of lime
    //we have p grams of salt. For each toast we need n * np grams of salt
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int x, y, z;
    x = (k * l) / (n * nl);
    y = c * d / n;
    z = p / (n * np);

    cout << minimum(x, y, z);

    return 0;

}