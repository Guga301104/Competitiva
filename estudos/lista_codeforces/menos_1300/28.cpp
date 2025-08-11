#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int res = 0;
   for (int i = 0 ; i < n ; i++){
    int cont = 0;
    for (int j = 0 ; j < 3 ; j++){
        int x; cin >> x;
        if (x == 1) cont ++;
    }
    if (cont >= 2) res ++;
   }
   cout << res << "\n";
   return 0;
}