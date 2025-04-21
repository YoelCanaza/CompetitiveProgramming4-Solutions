#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int g, s, c; cin >> g >> s >> c;
    int puntos = g*3 + s*2 + c*1;

    if (puntos >= 8) {
        cout << "Province or Gold" << ENDL;
    } else if (puntos >= 5) {
        if (puntos >= 6) cout << "Duchy or Gold" << ENDL;
        else cout << "Duchy or Silver" << ENDL;
    } else if (puntos >= 2) {
        if (puntos >= 3) cout << "Estate or Silver" << ENDL;
        else cout << "Estate or Copper" << ENDL;
    } else {
        cout << "Copper" << ENDL;
    }

    return 0;
}