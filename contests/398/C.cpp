#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   vector<int> fila (n+1);
   map <int, int> mapa;
   for (int i = 1 ; i <= n ; ++i){
    cin >> fila[i];
    mapa[fila[i]] ++;
   }
   int maior = -1;
   int index = -1;
   for (int j = 1 ; j <= n ; ++j){
    if (mapa[fila[j]] == 1 && fila[j] > maior){
        maior = fila[j];
        index = j;
    }
   }
   cout << index << "\n";
   return 0;
}