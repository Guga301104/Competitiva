#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, q;
   cin >> n >> q;
   vector<int> lista (n+1);
   vector<int> contador (n+1, 1);
   int cont = 0;
   for (int i = 1 ; i <= n ; i++){
      lista[i] = i;
   }
   while (q--){
      int x;
      cin >> x;
      if (x == 1){
         int a, b;
         cin >> a >> b;
         int y = lista[a];
         contador[y] --;
         if (contador[y] == 1) cont --;
         contador[b] ++;
         if (contador[b] == 2) cont ++;
         lista[a] = b;
      }
      else if (x == 2){
         cout << cont << "\n";
      }
   }
   return 0;
}