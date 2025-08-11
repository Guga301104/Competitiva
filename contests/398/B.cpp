#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   map <int, int> mapa;
   for (int i = 0 ; i < 7 ; ++i){
    int x;
    cin >> x;
    mapa[x] ++;
   }
   bool valido = false;
   for (int j = 0 ; j < mapa.size()-1 ; ++j){
    if (mapa[j] == 2){
        for (int k = j+1 ; k < mapa.size() ; ++k){
            if (mapa[k] >= 3) valido = true;
        }
    }
    else if (mapa[j] > 2){
        for (int k = j+1 ; k < mapa.size() ; ++k){
            if (mapa[k] >= 2) valido = true;
        }
    }
   }
   if (valido) cout << "Yes\n";
   else cout << "No\n";
   return 0;
}