// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2163
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

void solve(int cases) {
    vector<vector<int>> problems(3);
    vector<vector<int>> uniques(3);

    for (int i = 0; i < 3; i++) {
        int newSize; cin >> newSize;
        problems[i].resize(newSize);
        for (int j = 0; j < newSize; j++) {
            cin >> problems[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int problem : problems[i]) {
            bool repeatedIn1 = false, repeatedIn2 = false;

            for (int p2 : problems[(i+1)%3]) {
                if (p2 == problem) {
                    repeatedIn1 = true;
                    break;
                }
            }

            for (int p3 : problems[(i+2)%3]) {
                if (p3 == problem) {
                    repeatedIn2 = true;
                    break;
                }
            }

            if (!repeatedIn1 && !repeatedIn2) {
                uniques[i].push_back(problem);
            }
        }
    }

    int maxUniques = 0;
    for (int i = 0; i < 3; i++) {
        maxUniques = max(maxUniques, (int)uniques[i].size());
    }

    cout << "Case #" << cases << ":\n";
    for (int i = 0; i< 3; i++) {
        if((int)uniques[i].size() == maxUniques) {
            sort(uniques[i].begin(), uniques[i].end());
            cout << i+1 << " " << maxUniques;
            for (int unico : uniques[i]) {
                cout << " " << unico;
            }
            cout << "\n";
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int i = 1; i <= T; ++i) {
        solve(i);
    }

    return 0;
}