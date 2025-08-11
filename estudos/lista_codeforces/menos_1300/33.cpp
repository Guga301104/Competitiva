#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<pi> lista (n);
   for (int i = 0 ; i < n ; i++){
      cin >> lista[i].first >> lista[i].second;
   }
   int c = 0;
   for (int i = 0 ; i < n ; i++){
      bool cima = false, baixo = false, dir = false, esq = false;
      for (int j = 0 ; j < n ; j++){
         if (j == i) continue;
         if (lista[i].first == lista[j].first){
            if (lista[j].second < lista[i].second) baixo = true;
            if (lista[j].second > lista[i].second) cima = true;
         }
         if (lista[i].second == lista[j].second){
            if (lista[j].first < lista[i].first) esq = true;
            if (lista[j].first > lista[i].first) dir = true;
         }
      }
      if (cima && baixo && esq && dir) c++;
   }
   cout << c << "\n";
   return 0;
}