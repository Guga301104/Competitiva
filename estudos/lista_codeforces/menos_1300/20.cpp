#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   string x = "";
   for (int i = 0 ; i < s.size() ; i++){
    if (s[i] != '+') x += s[i];
   }
   sort(x.begin(), x.end());
   string res = "";
   for (int i = 0 ; i < x.size() ; i++){
    res += x[i];
    res += (i == x.size() - 1 ? "" : "+");
   }
   cout << res << "\n";
   return 0;
}