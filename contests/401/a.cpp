#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int x = stoi(s);
   if(x >= 200 && x <= 299) cout << "Success\n";
   else cout << "Failure\n";
   return 0;
}