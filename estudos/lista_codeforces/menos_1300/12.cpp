#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string x, y; cin >> x >> y;
   string res = "";
   for (int i = 0 ; i < x.size() ; i++){
    if (x[i] == y[i]) res += '0';
    else res += '1';
   }
   cout << res << "\n";
   return 0;
}