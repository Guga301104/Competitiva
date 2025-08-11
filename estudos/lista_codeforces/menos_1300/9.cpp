#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int cont = 0;
   for (char c : s){
    if (c == '4' || c == '7') cont ++;
   }
   if (cont == 4 || cont == 7) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}