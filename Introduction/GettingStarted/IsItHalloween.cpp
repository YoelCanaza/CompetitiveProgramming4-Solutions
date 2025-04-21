#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
const char ENDL = '\n';

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string mes;
    int dia;
    cin >> mes >> dia;

    if ((mes == "OCT" && dia == 31) || (mes == "DEC" && dia == 25)) cout << "yup" << ENDL;
    else cout << "nope" << ENDL;

    return 0;
}