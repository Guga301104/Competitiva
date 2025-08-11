#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   int x = 0;
   while (t--){
    string s; cin >> s;
    if (s[1] == '+') x ++;
    else x --;
   }
   cout << x << "\n";
   return 0;
}