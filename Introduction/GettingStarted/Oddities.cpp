#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    int x; cin >> x;
    if (x%2) {
        cout << x << " is odd" << ENDL;
    } else cout << x << " is even" << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    while(n--) solve();

    return 0;
}