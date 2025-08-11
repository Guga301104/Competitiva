#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   ll menor = numeric_limits<int>::min();
   ll maior = numeric_limits<int>::max();
   if (menor <= n && n <= maior) cout << "Yes\n";
   else cout << "No\n";
   return 0;
}