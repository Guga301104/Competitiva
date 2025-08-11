#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   set<int> lista;
   for (int i = 0 ; i < 4 ; i++){
    int x; cin >> x;
    lista.insert(x);
   }
   cout << 4 - lista.size() << "\n";
   return 0;
}