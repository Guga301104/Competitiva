#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int>lista(n+1);
   bool ok = true;
   for (int i = 1 ; i <= n ; i++){
    if (i%2 != 0) lista[i] = i+1;
    else lista[i] = i-1;
   }
   for (int i = 1 ; i <= n ; i++){
    if (lista[lista[i]] != i) ok = false;
    if (lista[i] == i) ok = false;
   }
   if (ok){
    for (int i = 1 ; i <= n ; i++){
        cout << lista[i] << (i < n ? " " : "");
    }
    cout << "\n";
   } else cout << "-1\n";
   return 0;
}