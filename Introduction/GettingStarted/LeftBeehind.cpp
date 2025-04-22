#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(int sweet, int sour) {
    if (sweet + sour == 13) {
        cout << "Never speak again." << ENDL;
    } else if (sweet < sour) {
        cout << "Left beehind." << ENDL;
    } else if (sweet == sour) {
        cout << "Undecided." << ENDL;
    } else {
        cout << "To the convention." << ENDL;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    while (cin >> x >> y && (x!=0 || y!=0)) solve(x, y);

    return 0;
}