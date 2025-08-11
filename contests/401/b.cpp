#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   bool l = false;
   int c = 0;
   while (n--){
    string s; cin >> s;
    if (s == "login") l = true;
    else if (s == "logout") l = false;
    else if (s == "private" && !l) c++;
   }
   cout << c << "\n";
   return 0;
}