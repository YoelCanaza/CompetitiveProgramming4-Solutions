// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3302
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<vector<int>> pairs(n, vector<int>(2)); // the first represents the car number, and the second indicates the positions gained or lost
        for (vector<int> &par : pairs) {
            cin >> par[0] >> par[1];
        }
        
        vector<int> initialGrid(n);

        for (int i = 0; i < n; i++) {
            int indexInNewGred = i + pairs[i][1];
            if (indexInNewGred < n && indexInNewGred >= 0) initialGrid[indexInNewGred] = pairs[i][0];       
        }

        bool noDefective = true;

        for (const int number : initialGrid) {
            if (number == 0) {
                noDefective = false;
                break;
            } 
        }

        if (noDefective) {
            for (int i = 0; i < n; i++) {
                if (i > 0) cout << " ";
                cout << initialGrid[i];
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }

    }

    return 0;
}