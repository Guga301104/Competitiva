#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   int x = n+1;
   while (true){
    int cont = 0;
    for (int i = 2 ; i <= x/2 ; i++){
        if (x%i == 0) {
            cont ++;
            break;
        }
    }
    if (cont == 0) break;
    else x ++;
   }
   if (m == x) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}