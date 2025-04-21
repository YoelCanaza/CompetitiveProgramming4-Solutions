#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    if (n > m) {
        if (n-m == 1) cout << "Dr. Chaz needs " << n - m << " more piece of chicken!" << ENDL;
        else cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << ENDL;
    } else {
        if (m-n == 1) cout << "Dr. Chaz will have " << m - n << " piece of chicken left over!" << ENDL;
        else cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << ENDL;
    }

    return 0;
}