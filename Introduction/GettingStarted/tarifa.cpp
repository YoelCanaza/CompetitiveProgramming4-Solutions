#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    Long x; cin >> x;
    int n; cin >> n;
    Long sobra = 0;
    while (n--) {
        Long gastoMes; cin >> gastoMes;
        sobra += x;
        sobra -= gastoMes;
    }
    sobra += x;
    cout << sobra << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}