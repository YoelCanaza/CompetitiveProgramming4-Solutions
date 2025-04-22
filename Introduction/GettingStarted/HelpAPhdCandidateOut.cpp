#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

void solve(void) {
    string problem; cin >> problem;
    if (problem[0] != 'P') {
        string a = ""; string b = "";
        bool mas = false;
        for (int i = 0; i < (int)problem.size(); i++) {
            if (problem[i] == '+') {
                i += 1;
                mas = true;
            } 
            if (!mas) {
                a += problem[i];
            } else {
                b += problem[i];
            }
        }
        int aint = 0;
        for (int i = 0; i < (int)a.size(); i++) {
            int val = 1;
            for (int j = 0; j < (int)a.size()-i-1; j++) {
                val *= 10;
            }
            aint += (a[i]-'0') * val;
        }

        int bint = 0;
        for (int i = 0; i < (int)b.size(); i++) {
            int val = 1;
            for (int j = 0; j < (int)b.size()-i-1; j++) {
                val *= 10;
            }
            bint += (b[i]-'0') * val;
        }

        cout << aint + bint << ENDL;

    } else {
        cout << "skipped" << ENDL;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    while (n--) solve();

    return 0;
}