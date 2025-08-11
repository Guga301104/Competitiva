#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string t; cin >> t;
   int x = 0, y = 0;
   int j = 0;
   for (int i = 0 ; i < n ; i++){
    if (t[i] == 'R') {
        j += 1;
        if (j == 4) j = 0;
    }
    else {
        if (j == 0) x += 1;
        else if (j == 1) y -= 1;
        else if (j == 2) x -= 1;
        else if (j == 3) y += 1;
    }
   }
   cout << x << " " << y << "\n";
   return 0;
}