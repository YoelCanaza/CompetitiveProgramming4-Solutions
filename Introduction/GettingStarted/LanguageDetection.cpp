#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

const vector<string> idiomas = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
const vector<string> palabraHola = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};

void solve(string palabra, int caso) {
    for (int i = 0; i < 6; i++) {
        if (palabra == palabraHola[i]) {
            cout << "Case " << caso << ": " << idiomas[i] << ENDL;
            return;
        }
    }
    cout << "Case " << caso << ": " << "UNKNOWN" << ENDL;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int caso = 1;
    while (cin >> s && s != "#") {
        solve(s, caso);
        caso += 1;
    }

    return 0;
}