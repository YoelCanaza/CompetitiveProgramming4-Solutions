#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, r; cin >> l >> r;

    if (l+r == 0) cout << "Not a moose" << ENDL;
    else if (l != r) {
        int mayor;
        if (l>r) mayor = l;
        else mayor = r;
        cout << "Odd " << mayor*2 << ENDL;
    } else {
        cout << "Even " << l+r << ENDL;
    }

    return 0;
}