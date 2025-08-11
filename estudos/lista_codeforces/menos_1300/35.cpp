#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll x, y, z, a, b, c; cin >> x >> y >> z;
   a = sqrt((x*y)/z);
   b = sqrt((x*z)/y);
   c = sqrt((y*z)/x);
   cout << 4*a + 4*b + 4*c << "\n";
   return 0;
}