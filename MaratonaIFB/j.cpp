#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   double k = (3.14159 / 180.0);
   double AB, C; cin >> AB >> C;
   AB *= k;
   C *= k;
    if (sin(AB) > sin(C)) cout << "O Claudio ta ali embaixo!\n";
    else if (sin(AB) < sin(C)) cout << "Olha o Claudio ali em cima!\n";
    else cout << "O Claudio ta do outro lado da roda!\n";
   return 0;
}