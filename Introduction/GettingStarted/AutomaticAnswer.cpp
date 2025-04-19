#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    int n; cin >> n;
    int result = abs(315*n + 7492*5 - 498);
    cout << (result%100)/10 << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}