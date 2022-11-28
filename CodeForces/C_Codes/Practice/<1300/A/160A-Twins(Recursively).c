#include <stdio.h>

/*mistakes that I had made in this code
1. Order of base cases : when we reach the last index, I was immediately returning the size, which is wrong
because there can be cases where we get an optimal soln using the last element.

2. Order of parameters in the function call
Initially my parameters where (coins, curr_sum + coins[idx], rem_sum - coins[idx], ++idx, ++taken)
This gets messed up because parameters are evaluated from right to left, idx gets updated

3. the way idx and taken were passed (as above)
There are 2 recursive calls for each function, idx gets updated and then 2nd call is made. So many ids
get skipped. instead pass it as idx++

4. base case
idx >= size - 1 was what I had initially written but in that, we never really consider the case where we take
the last element */


int min(int a, int b) {
    return (a > b ? b : a);
}

int min_coins(int *coins,  int size, int idx, int taken, int rem_sum, int curr_sum) {

    // printf("current element = %d\ntaken sum = %d\nno = %d\n\n\n", coins[idx], curr_sum, taken);
    if(curr_sum > rem_sum) {
        // printf("YAY FOUND!\n");
        return taken;
    }

    if(idx >= size) {
        return size;
    }
    return min(
        min_coins(coins, size, idx + 1, taken + 1, rem_sum - coins[idx], curr_sum + coins[idx]), 
        min_coins(coins, size, idx + 1, taken, rem_sum, curr_sum)
    );

}

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0, coins[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &coins[i]);

        sum += coins[i];
    }

    printf("%d", min_coins(coins, n, 0, 0, sum, 0));

    return 0;
}