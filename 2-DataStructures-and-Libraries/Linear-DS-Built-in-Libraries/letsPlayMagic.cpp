// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1919
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    while (cin >> N && N != 0) {
        vector<string> cards(N+1);
        int index = 0;

        for (int i = 1; i <= N; i++) {
            string card, word;
            cin >> card >> word;

            int numbLetters = word.size();

            for (int j = 0; j < numbLetters; j++) {
                index += 1;
                while (cards[index] != "") index += 1;
                if (index > N) {
                    index = 1;
                    while (cards[index] != "") index += 1;
                } 
                    
            }

            cards[index] = card;
        }

        for (int i = 1; i <= N; i++) {
            if (i > 1) cout << " ";
            cout << cards[i];
        }
        cout << endl;
    }

    return 0;
}