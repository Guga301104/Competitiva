#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   vector <int> lista;
   int cont = 0;
   for (int i = 0 ; i < t ; i++){
    int x; cin >> x;
    if (!lista.empty()){
        if (x > lista.back() || x < lista.front()) cont ++;
    }
    lista.push_back(x);
    sort(lista.begin(), lista.end());
   }
   cout << cont << "\n";
   return 0;
}