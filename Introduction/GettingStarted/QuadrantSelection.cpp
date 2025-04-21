#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y; cin >> x >> y;
    if (x > 0) {
        if (y > 0) {
            cout << 1 << ENDL;
        } else cout << 4 << ENDL;
    } else {
        if (y > 0) cout << 2 << ENDL;
        else cout << 3 << ENDL;
    }

    return 0;
}