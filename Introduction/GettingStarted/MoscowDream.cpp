#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, n; cin >> a >> b >> c >> n;
    if (a && b && c && n >= 3 && (a+b+c) >= n) {
        cout << "YES" << ENDL;
    } else cout << "NO" << ENDL;

    return 0;
}