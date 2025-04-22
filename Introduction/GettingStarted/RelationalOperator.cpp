#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    int a, b; cin >> a >> b;
    if (a == b) cout << "=" << ENDL;
    else if (a > b) cout << ">" << ENDL;
    else cout << "<" << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}