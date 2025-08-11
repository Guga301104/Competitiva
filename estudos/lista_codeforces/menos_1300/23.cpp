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
    if (count(x.begin(), x.end(), s[i]) == 0) x += s[i];
   }
   if (x.size() % 2 == 0) cout << "CHAT WITH HER!\n";
   else cout << "IGNORE HIM!\n"; 
   return 0;
}