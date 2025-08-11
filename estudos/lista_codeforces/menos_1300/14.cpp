#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> lista(n);
   for (int i = 0 ; i < n ; i++){
      cin >> lista[i];
   }
   int maior = 0, indexMaior = -1;
   int menor = 101, indexMenor = n+1;
   for (int i = 0 ; i < n ; i++){
      if (lista[i] > maior){
         maior = lista[i];
         indexMaior = i;
      }
   }
   for (int j = n-1 ; j >= 0 ; j--){
      if (lista[j] < menor){
         menor = lista[j];
         indexMenor = j;
      }
   }
   int res = indexMaior + (n - 1 - indexMenor);
   if (indexMaior > indexMenor) res -= 1;
   cout << res << "\n";
   return 0;
}