#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, r, c;
   string s;
   cin >> n >> r >> c;
   cin >> s;
   string resp = "";
   int x = 0, y = 0;
   set <pair<int, int>> fum;
   fum.insert({0,0});
   for (int i = 0 ; i < n ; ++i){
    for (auto [R, C] : fum){
        if (s[i] == 'N') x--;
        else if (s[i] == 'W') y--;
        else if (s[i] == 'S') x++;
        else if (s[i] == 'E') y++;
    }
    bool valido = false;
    if (fum.count({r-x, c-y})) valido = true;
    if (!fum.count({-x,-y})) fum.insert({-x,-y});
    resp += (valido ? '1' : '0');
   }
   cout << resp << "\n";
   return 0;
}