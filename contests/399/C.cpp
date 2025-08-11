#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int N, M;
   cin >> N >> M;
   vector<int> pais(N);
   for (int i = 0 ; i < N ; ++i){
    pais[i] = i;
   }
   auto find = [&] (int u) {
    while (pais[u] != u){
        pais[u] = pais[pais[u]];
        u = pais[u];
    }
    return u;
   };
   int c = 0;
   for (int i = 0 ; i < M ; ++i){
    int u, v;
    cin >> u >> v;
    u-- ; v-- ;
    int pu = find(u);
    int pv = find(v);
    if (pu == pv) c ++;
    else pais[pu] = pv;
   }
   cout << c << "\n";
   return 0;
}