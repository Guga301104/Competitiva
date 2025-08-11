#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string s1; cin >> s1;
   string s2; cin >> s2;
   double cont1 = 0, cont2 = 0;
   for (int i = 0 ; i < n ; i++){
    if (s1[i] == '*') cont1 ++;
    if (s2[i] == '*') cont2 ++;
   }
   double x = cont2/cont1;
   cout << fixed << setprecision(2) << 1-x << "\n";
   return 0;
}