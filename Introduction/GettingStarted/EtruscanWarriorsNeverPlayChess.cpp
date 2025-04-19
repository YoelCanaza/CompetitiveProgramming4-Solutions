#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    Long n; cin >> n;

    Long filas = (-1LL + sqrt(1+8*n))/2LL;
    cout << filas << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}