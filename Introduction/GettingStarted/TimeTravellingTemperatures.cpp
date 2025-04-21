#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double x, y; cin >> x >> y;
    
    if (y == 1) {
        if (x == 0) cout << "ALL GOOD" << ENDL;
        else cout << "IMPOSSIBLE" << ENDL;
    } else {
        double result = (x)/(1.0 - y);
        cout << fixed << setprecision(10) << result << ENDL;
    }

    return 0;
}