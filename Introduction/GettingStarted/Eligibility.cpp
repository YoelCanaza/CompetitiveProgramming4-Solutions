#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    string name; cin >> name;
    string uni, birth; cin >> uni >> birth;
    int cursos; cin >> cursos;

    int u = 0;
    int y = 0;

    u += 1000 * (uni[0] - '0');
    y += 1000 * (birth[0] - '0');
    u += 100 * (uni[1] - '0');
    y += 100 * (birth[1] - '0');
    u += 10 * (uni[2] - '0');
    y += 10 * (birth[2] - '0');
    u += 1 * (uni[3] - '0');
    y += 1 * (birth[3] - '0');

    if (u >= 2010 || y >= 1991) {
        cout << name << " eligible" << ENDL;
    } else if (cursos <= 40) {
        cout << name << " coach petitions" << ENDL;
    } else {
        cout << name << " ineligible" << ENDL;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}