// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3778
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s, b;

    while (cin >> s >> b && (s || b)) {
        vector<int> left(s+2), right(s+2);

        for (int i = 1; i <= s; i++) {
            left[i] = i - 1;
            right[i] = i + 1;
        }

        left[1] = 0;
        right[s] = 0;

        while(b--) {
            int L, R;
            cin >> L >> R;

            int newLeft = left[L];
            int newRight = right[R];

            right[newLeft] = newRight;
            left[newRight] = newLeft;
            
            if (newLeft == 0) cout << "* ";
            else cout << newLeft << " ";

            if (newRight == 0) cout << "*" << endl;
            else cout << newRight << endl;
        }

        cout << "-" << endl;
    }

    return 0;
}