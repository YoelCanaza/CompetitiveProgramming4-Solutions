// https://open.kattis.com/problems/jollyjumpers
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    while (cin >> n) {
        vector<int> numbers(n);
        vector<int> values(n);


        for (int &n : numbers) cin >> n;

        bool isJolly = true;

        for (int i = 0; i < n-1; i++) {
            if ((abs(numbers[i]-numbers[i+1])) < n) {
                values[abs(numbers[i]-numbers[i+1])] = 1;
            }
        }

        for (int i = 1; i < n; i++) {
            if (values[i] == 0) {
                isJolly = false;
                break;
            }
        }

        if (n == 1) isJolly = true;


        if (isJolly) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }

    return 0;
}