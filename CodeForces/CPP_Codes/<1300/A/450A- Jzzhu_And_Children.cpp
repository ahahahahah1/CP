#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m, child_index;
    cin >> n >> m;

    queue<int> q;
    int candy_req[n];

    for(child_index = 1; child_index <= n; child_index++) {
        q.push(child_index);
        cin >> candy_req[child_index - 1];
    }

    while(q.size() > 1) {
        child_index = q.front();
        q.pop();
        candy_req[child_index - 1] -= m;
        if(candy_req[child_index - 1] > 0) {
            q.push(child_index);
        }
    }

    cout << q.front();

    return 0;
}