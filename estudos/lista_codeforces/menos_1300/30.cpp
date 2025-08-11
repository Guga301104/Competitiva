#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   vector <int> lista(n+1);
   for (int i = 0 ; i < n ; i ++){
    int x; cin >> x;
    lista[x] = i;
   }
   int m; cin >> m;
   ll vas = 0, pet = 0;
   for (int i = 0 ; i < m ; i++){
    int y; cin >> y;
    ll p = lista[y];
    vas += p+1;
    pet += n - p;
   }
   cout << vas << " " << pet << "\n";
   return 0;
}