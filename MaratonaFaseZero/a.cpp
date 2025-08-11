#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int c, g; cin >> c >> g;
   if (c == 1) cout << "vivo e morto\n";
   else if (c == 0 && g == 1) cout << "vivo\n";
   else if (c == 0 && g == 0) cout << "morto\n";
   return 0;
}
