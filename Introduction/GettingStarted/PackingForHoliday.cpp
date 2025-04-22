#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(int caso) {
    int l, w, h; cin >> l >> w >> h;
    if (l > 20 || w > 20 || h > 20) {
        cout << "Case " << caso << ": bad" << ENDL;
    } else {
        cout << "Case " << caso << ": good" << ENDL;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    int caso = 1;
    while (t--) {
        solve(caso);
        caso += 1;
    } 

    return 0;
}