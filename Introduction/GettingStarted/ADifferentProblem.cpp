#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    Long a, b; 
    while (cin >> a >> b) {
        Long dif = abs(a-b);
        cout << dif << ENDL;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}